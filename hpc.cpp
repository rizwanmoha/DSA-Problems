// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <numeric>
// #include <cstdlib>
// #include <ctime>
// #include <limits>

// using namespace std;

// const int MAX_ITERATIONS = 1000;
// const double EVAPORATION_RATE = 0.5;

// struct Edge {
//     int u, v;
// };

// class Graph {
// private:
//     int V;
//     vector<vector<int>> adj;

// public:
//     Graph(int vertices) : V(vertices) {
//         adj.resize(V);
//     }

//     void addEdge(int u, int v) {
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     vector<int> getAdjacentVertices(int vertex) {
//         return adj[vertex];
//     }
// };

// class ABC {
// private:
//     int numVertices;
//     Graph graph;
//     int numBees;
//     vector<bool> bestSolution;
//     double bestFitness;

// public:
//     ABC(int vertices, int bees) : numVertices(vertices), graph(vertices), numBees(bees) {
//         bestSolution.resize(numVertices, false);
//         bestFitness = numeric_limits<double>::max();
//     }

//     void addEdge(int u, int v) {
//         graph.addEdge(u, v);
//     }

//     double evaluateFitness(const vector<bool>& solution) {
//     for (int u = 0; u < numVertices; ++u) {
//         if (!solution[u]) {
//             for (int v : graph.getAdjacentVertices(u)) {
//                 if (!solution[v]) {
//                     // Edge is not covered by any vertex in the solution
//                     return numeric_limits<double>::max();
//                 }
//             }
//         }
//     }
//     // All edges are covered by the solution, so it is a valid vertex cover
//     return count(solution.begin(), solution.end(), true);
// }

//     vector<bool> generateRandomSolution() {
//         vector<bool> solution(numVertices, false);
//         for (int i = 0; i < numVertices / 2; ++i) {
//             solution[rand() % numVertices] = true;
//         }
//         return solution;
//     }

//     vector<bool> flipVertices(const vector<bool>& solution) {
//         vector<bool> newSolution = solution;
//         int index = rand() % numVertices;
//         newSolution[index] = !newSolution[index];
//         return newSolution;
//     }

//   void ABCAlgorithm() {
//     vector<vector<bool>> solutions(numBees);
//     vector<double> fitness(numBees);

//     // Initialize solutions randomly
//     for (int i = 0; i < numBees; ++i) {
//         solutions[i] = generateRandomSolution();
//         fitness[i] = evaluateFitness(solutions[i]);
//     }

//     for (int iter = 0; iter < MAX_ITERATIONS; ++iter) {
//         // Employed bees phase
//         for (int i = 0; i < numBees; ++i) {
//             vector<bool> newSolution = flipVertices(solutions[i]);
//             double newFitness = evaluateFitness(newSolution);
//             if (newFitness < fitness[i]) {
//                 solutions[i] = newSolution;
//                 fitness[i] = newFitness;
//             }
//         }

//         // Onlooker bees phase
//         for (int i = 0; i < numBees; ++i) {
//             double totalFitness = accumulate(fitness.begin(), fitness.end(), 0.0);
//             double selectionProbability = fitness[i] / totalFitness;
//             if (rand() / (RAND_MAX + 1.0) < selectionProbability) {
//                 vector<bool> newSolution = flipVertices(solutions[i]);
//                 double newFitness = evaluateFitness(newSolution);
//                 if (newFitness < fitness[i]) {
//                     solutions[i] = newSolution;
//                     fitness[i] = newFitness;
//                 }
//             }
//         }

//         // Scout bees phase
//         for (int i = 0; i < numBees; ++i) {
//             if (rand() / (RAND_MAX + 1.0) < 0.1) {
//                 solutions[i] = generateRandomSolution();
//                 fitness[i] = evaluateFitness(solutions[i]);
//             }
//         }

//         // Update best solution
//         auto minFitnessIt = min_element(fitness.begin(), fitness.end());
//         if (*minFitnessIt < bestFitness) {
//             int index = distance(fitness.begin(), minFitnessIt);
//             bestSolution = solutions[index];
//             bestFitness = *minFitnessIt;

//         }

//         // Evaporation of pheromones
//         for (int i = 0; i < numBees; ++i) {
//             for (int j = 0; j < numVertices; ++j) {
//                 solutions[i][j] = solutions[i][j] * (1 - EVAPORATION_RATE);
//             }
//         }
//     }
// }

//     void printSolution() {
//         cout << "Best Vertex Cover: ";
//         for (int i = 0; i < numVertices; ++i) {
//             if (bestSolution[i]) {
//                 cout << i << " ";
//             }
//         }
//         cout << endl;
//     }
// };

// int main() {
//     // Create a graph with 6 vertices
//     int numVertices = 6;
//     ABC abc(numVertices, 5); // 5 bees
//     Graph graph(numVertices);

//     // Add edges to the graph
//     graph.addEdge(0, 1);
//     graph.addEdge(0, 2);
//     graph.addEdge(1, 3);
//     graph.addEdge(2, 3);
//     graph.addEdge(3, 4);
//     graph.addEdge(4, 5);

//     // Set the graph for ABC algorithm
//     abc.addEdge(0, 1);
//     abc.addEdge(0, 2);
//     abc.addEdge(1, 3);
//     abc.addEdge(2, 3);
//     abc.addEdge(3, 4);
//     abc.addEdge(4, 5);

//     // Run the ABC algorithm
//     abc.ABCAlgorithm();

//     // Print the best solution
//     abc.printSolution();

//     return 0;
// }


#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <omp.h> // Include OpenMP header

using namespace std;

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
        // evaluate Fitness
public:
    ABC(int vertices, int bees) : numVertices(vertices), graph(vertices), numBees(bees) {
        bestSolution.resize(numVertices, false);
        bestFitness = numeric_limits<double>::max();
    }

    void addEdge(int u, int v) {
        graph.addEdge(u, v);
    }

    // double evaluateFitness(const vector<bool>& solution) {
    //     for (int u = 0; u < numVertices; ++u) {
    //         if (!solution[u]) {
    //             for (int v : graph.getAdjacentVertices(u)) {
    //                 if (!solution[v]) {
    //                     // Edge is not covered by any vertex in the solution
    //                     return numeric_limits<double>::max();
    //                 }
    //             }
    //         }
    //     }
    //     // All edges are covered by the solution, so it is a valid vertex cover
    //     return count(solution.begin(), solution.end(), true);
    // }

    double evaluateFitness(const vector<bool>& solution) {
    double fitness = numeric_limits<double>::max();
    int numVertices = solution.size();
    int numThreads, tid;
    double localFitness = numeric_limits<double>::max();

    #pragma omp parallel private(tid) shared(fitness, localFitness) 
    {
        tid = omp_get_thread_num();
        if (tid == 0) {
            numThreads = omp_get_num_threads();
        }

        #pragma omp for reduction(min : localFitness)
        for (int u = 0; u < numVertices; ++u) {
            if (!solution[u]) {
                bool coversEdge = true;
                for (int v : graph.getAdjacentVertices(u)) {
                    if (!solution[v]) {
                        coversEdge = false;
                        break;
                    }
                }
                if (coversEdge) {
                    localFitness = min(localFitness, (double)count(solution.begin(), solution.end(), true));
                }
            }
        }

        #pragma omp critical
        {
            fitness = min(fitness, localFitness);
        }
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

        // Initialize solutions randomly
        #pragma omp parallel for
        for (int i = 0; i < numBees; ++i) {
            solutions[i] = generateRandomSolution();
            fitness[i] = evaluateFitness(solutions[i]);
        }

        for (int iter = 0; iter < MAX_ITERATIONS; ++iter) {
            // Employed bees phase
            #pragma omp parallel for
            for (int i = 0; i < numBees; ++i) {
                vector<bool> newSolution = flipVertices(solutions[i]);
                double newFitness = evaluateFitness(newSolution);
                if (newFitness < fitness[i]) {
                    solutions[i] = newSolution;
                    fitness[i] = newFitness;
                }
            }

            // Onlooker bees phase
            double totalFitness = accumulate(fitness.begin(), fitness.end(), 0.0);
            #pragma omp parallel for
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
            #pragma omp parallel for
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
            #pragma omp parallel for
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
    int numVertices = 6;
    ABC abc(numVertices, 5); // 5 bees
    Graph graph(numVertices);

    // Add edges to the graph
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);
    graph.addEdge(4, 5);

    // Set the graph for ABC algorithm
    abc.addEdge(0, 1);
    abc.addEdge(0, 2);
    abc.addEdge(1, 3);
    abc.addEdge(2, 3);
    abc.addEdge(3, 4);
    abc.addEdge(4, 5);

    // Run the ABC algorithm
    abc.ABCAlgorithm();

    // Print the best solution
    abc.printSolution();

    return 0;
}

