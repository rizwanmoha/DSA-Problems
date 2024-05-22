# Usage Instructions

C++ Compiler (e.g., GCC): You need a C++ compiler to compile and run the code. GCC (GNU Compiler Collection) is a widely used C++ compiler and is recommended for this purpose.

OpenMP: OpenMP is an API that supports multi-platform shared memory multiprocessing programming in C, C++, and Fortran. It allows you to write parallel programs that run on multiple cores of the CPU. Ensure that your C++ compiler supports OpenMP or install it separately if required.

# steps

# Step 1: Compilation

g++ -o abc_algorithm abc_algorithm.cpp -fopenmp

# Step 2: Execution

./abc_algorithm

# What does the program do 

Overall, the program efficiently utilizes the ABC algorithm to find an approximate minimum vertex cover for the given graph, leveraging parallelization for improved performance.


