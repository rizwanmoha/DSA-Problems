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
        // #pragma omp parallel for  num_threads(7)
        for (int u = 0; u < numVertices; ++u) {
            if (!solution[u]) {
                for (int v : graph.getAdjacentVertices(u)) {
                    if (!solution[v]) {
                        // Edge is not covered by any vertex in the solution
                        return numeric_limits<double>::max();
                    }
                }
            }
        }
        // All edges are covered by the solution, so it is a valid vertex cover
        return count(solution.begin(), solution.end(), true);
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

        // Initialize solutions randomly
    //  #pragma omp parallel num_threads(3)

    
    for (int i = 0; i < numBees; ++i) {
        // Generate a random solution and evaluate its fitness
        vector<bool> newSolution = generateRandomSolution();
        double newFitness = evaluateFitness(newSolution);

        // Enter critical section to update solutions and fitness arrays
        // #pragma omp critical
        // {
            solutions[i] = newSolution;
            fitness[i] = newFitness;
        // }
    }


        for (int iter = 0; iter < MAX_ITERATIONS; ++iter) {
            // Employed bees phase
            // #pragma omp parallel for
           
for (int i = 0; i < numBees; ++i) {
    // Create local variables to store new solution and fitness
    vector<bool> newSolution = flipVertices(solutions[i]);
    double newFitness = evaluateFitness(newSolution);
    
    // Use critical section to update solutions and fitness
    
    
        if (newFitness < fitness[i]) {
            solutions[i] = newSolution;
            fitness[i] = newFitness;
        }
    
}

            // Onlooker bees phase
            double totalFitness = accumulate(fitness.begin(), fitness.end(), 0.0);
       
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

            // Scout bees phase
           
            for (int i = 0; i < numBees; ++i) {
                if (rand() / (RAND_MAX + 1.0) < 0.1) {
                    solutions[i] = generateRandomSolution();
                    fitness[i] = evaluateFitness(solutions[i]);
                }
            }

            // Update best solution
            auto minFitnessIt = min_element(fitness.begin(), fitness.end());
            if (*minFitnessIt < bestFitness) {
                bestFitness = *minFitnessIt;
                int index = distance(fitness.begin(), minFitnessIt);
                bestSolution = solutions[index];
            }

            // Evaporation of pheromones
         
            for (int i = 0; i < numBees; ++i) {
                for (int j = 0; j < numVertices; ++j) {
                
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
int numVertices = 1000;
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
    // Print the best solution
    abc.printSolution();

    return 0;
}