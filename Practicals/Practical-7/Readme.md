# Computing Fibonacci Sequence in C

This C program computes the Fibonacci sequence up to the nth number using matrix exponentiation. It also measures the time taken for the computation.

## Code Explanation

### Libraries Used

- `<stdio.h>`: Standard Input/Output functions.
- `<time.h>`: Time-related functions for measuring CPU time.

### Functions Defined

1. `multiply(int F[2][2], int M[2][2])`: Multiplies two 2x2 matrices.
2. `power(int F[2][2], int n)`: Raises a matrix to the power n using recursion.
3. `fib(int n)`: Computes the nth Fibonacci number using matrix exponentiation.

### Main Function

1. Prompts the user to enter the value of `n`.
2. Measures the CPU time before the computation starts using `clock()` function.
3. Computes and prints the Fibonacci sequence up to the `n`th number using a loop.
4. Measures the CPU time after the computation ends using `clock()` function.
5. Calculates and prints the time taken to compute the Fibonacci sequence.

## Time Complexity

The time complexity of the matrix exponentiation method is O(log n) for computing a single Fibonacci number. However, computing the entire sequence up to the nth number requires O(n) operations overall because each Fibonacci number needs to be calculated individually.


