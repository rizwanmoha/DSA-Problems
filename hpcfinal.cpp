#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <chrono> 
#include <omp.h> // Include OpenMP header

using namespace std;
using namespace std::chrono;

const int MAX_ITERATIONS = 1000;
const double EVAPORATION_RATE = 0.5;
double ONLOOKER=0;
double SCOUT=0;
double MAX_eval_fitness_Time=0;
double MIN_eval_fitness_Time=1e7+3;
int num_thread= 1;

struct Edge {
    int u, v;
};

class Graph {
private:
    int V;
    vector<vector<int>> adj;

public:
    Graph(int vertices) : V(vertices) {
        adj.resize(V);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> getAdjacentVertices(int vertex) {
        return adj[vertex];
    }
};

class ABC {
private:
    int numVertices;
    Graph graph;
    int numBees;
    vector<bool> bestSolution;
    double bestFitness;

public:
    ABC(int vertices, int bees) : numVertices(vertices), graph(vertices), numBees(bees) {
        bestSolution.resize(numVertices, false);
        bestFitness = numeric_limits<double>::max();
    }

    void addEdge(int u, int v) {
        graph.addEdge(u, v);
    }

    double evaluateFitness(const vector<bool>& solution) {
        double fitness = 0.0;
        for (int u = 0; u < numVertices; ++u) {
            if (!solution[u]) {
                for (int v : graph.getAdjacentVertices(u)) {
                    if (!solution[v]) {
                        return numeric_limits<double>::max();
                    }
                }
            }
            fitness++;
        }
        return fitness;
    }

    vector<bool> generateRandomSolution() {
        vector<bool> solution(numVertices, false);
        for (int i = 0; i < numVertices / 2; ++i) {
            solution[rand() % numVertices] = true;
        }
        return solution;
    }

    vector<bool> flipVertices(const vector<bool>& solution) {
        vector<bool> newSolution = solution;
        int index = rand() % numVertices;
        newSolution[index] = !newSolution[index];
        return newSolution;
    }

    void ABCAlgorithm() {
        vector<vector<bool>> solutions(numBees);
        vector<double> fitness(numBees);

        #pragma omp parallel for num_threads(num_thread) shared(solutions, fitness)
        for (int i = 0; i < numBees; ++i) {
            // Generate a random solution and evaluate its fitness
            vector<bool> newSolution = generateRandomSolution();
            double newFitness = evaluateFitness(newSolution);
            solutions[i] = newSolution;
            fitness[i] = newFitness;
        }


        for (int iter = 0; iter < MAX_ITERATIONS; ++iter) {


           #pragma omp parallel for num_threads(num_thread) shared(solutions, fitness)
for (int i = 0; i < numBees; ++i) {
    #pragma omp task firstprivate(i)
    {
        vector<bool> newSolution = flipVertices(solutions[i]);
        #pragma omp task firstprivate(i, newSolution)
        {
            double newFitness = evaluateFitness(newSolution);
            #pragma omp critical
            {
                if (newFitness < fitness[i]) {
                    solutions[i] = newSolution;
                    fitness[i] = newFitness;
                }
            }
        } 
    } 
} 

#pragma omp taskwait


            // Onlooker bees phase
            auto startOut = high_resolution_clock::now();
            double totalFitness = accumulate(fitness.begin(), fitness.end(), 0.0);
            #pragma omp parallel for num_threads(num_thread) firstprivate(totalFitness) lastprivate(totalFitness) shared(solutions, fitness)
            for (int i = 0; i < numBees; ++i) {
                double selectionProbability = fitness[i] / totalFitness;
                if (rand() / (RAND_MAX + 1.0) < selectionProbability) {
                    vector<bool> newSolution = flipVertices(solutions[i]);
                    double newFitness = evaluateFitness(newSolution);
                    if (newFitness < fitness[i]) {
                        solutions[i] = newSolution;
                        fitness[i] = newFitness;
                    }
                }
            }

            auto stopOut = high_resolution_clock::now();
            auto duration = duration_cast<microseconds>(stopOut - startOut);
            if(duration.count()){
                ONLOOKER+=duration.count();
            }

            // Scout bees phase
            auto startSco = high_resolution_clock::now();
           #pragma omp parallel for num_threads(num_thread) shared(solutions, fitness)
for (int i = 0; i < numBees; ++i) {
    #pragma omp task firstprivate(i)
    {
        solutions[i] = generateRandomSolution();
    }
    #pragma omp task firstprivate(i)
    {
        fitness[i] = evaluateFitness(solutions[i]);
    }
    #pragma omp taskwait
}





            auto stoptSco = high_resolution_clock::now();
            auto durationScou = duration_cast<microseconds>(stoptSco - startSco);
            if(durationScou.count()){
                SCOUT+=durationScou.count();
            }

            // Update best solution
            auto minFitnessIt = min_element(fitness.begin(), fitness.end());
            if (*minFitnessIt < bestFitness) {
                bestFitness = *minFitnessIt;
                int index = distance(fitness.begin(), minFitnessIt);
                bestSolution = solutions[index];
            }

            // Evaporation of pheromones
            #pragma omp parallel for collapse(2) num_threads(num_thread) shared(solutions)
            for (int i = 0; i < numBees; ++i) {
                for (int j = 0; j < numVertices; ++j) {
                    #pragma atomic   
                    solutions[i][j] = solutions[i][j]  * (1 - EVAPORATION_RATE);
                }
            }
        }
    }

    void printSolution() {
        cout << "Best Vertex Cover: ";
        for (int i = 0; i < numVertices; ++i) {
            if (bestSolution[i]) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
};

int main() {
    srand(time(NULL)); // Seed random number generator

    // Create a graph with 6 vertices
    int numVertices = 7000;
    ABC abc(numVertices, 500); // 5 bees
    Graph graph(numVertices);

    // Add edges to the graph
    for (int i = 0; i < numVertices - 1; ++i) {
        graph.addEdge(i, i + 1);
    }

    // Add the last edge to complete the cycle
    graph.addEdge(numVertices - 1, 0);

    // Set the graph for ABC algorithm
    for (int i = 0; i < numVertices - 1; ++i) {
        abc.addEdge(i, i + 1);
    }

    // Add the last edge to complete the cycle
    abc.addEdge(numVertices - 1, 0);

    // Run the ABC algorithm
    auto start = high_resolution_clock::now();
    abc.ABCAlgorithm();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "Execution time: " << duration.count() << " milliseconds" << endl;
    cout << endl;
    cout << "Exctuion time for Onlooker bee on an average is: " << ONLOOKER/MAX_ITERATIONS << " microseconds" << endl;
    cout << "Exctuion time for Onlooker bee is: " << ONLOOKER/1000 << " milliseconds" << endl;
    cout << endl;
    cout << "Exctuion time for Scout bee on an average is: " << SCOUT/MAX_ITERATIONS << " microseconds" << endl;
    cout << "Exctuion time for Scout bee is: " << SCOUT/1000 << " milliseconds" << endl;

    // Print the best solutiona
    // abc.printSolution();

    return 0;
}