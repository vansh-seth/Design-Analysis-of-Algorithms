# Matrix Chain Multiplication
Matrix Chain Multiplication is a classic problem in dynamic programming where the goal is to find the most efficient way to multiply a sequence of matrices together, minimizing the total number of element multiplications required.

## Problem Statement

Given the dimensions of a sequence of matrices in an array `arr[]`, where the dimension of the ith matrix is `(arr[i-1] * arr[i])`, the task is to find the minimum number of multiplications needed to multiply these matrices together.

### Example

**Input:** `arr[] = {40, 20, 30, 10, 30}`  
**Output:** `26000`  
**Explanation:**  
There are 4 matrices of dimensions 40×20, 20×30, 30×10, 10×30.  
The minimum number of multiplications are obtained by putting parentheses in the following way: `(A(BC))D`.  
The minimum is `20*30*10 + 40*20*10 + 40*10*30`.

## Approach

### 1. Dynamic Programming (Memoization)

- **Optimal Substructure:** The problem exhibits optimal substructure as we break bigger groups into smaller subgroups.
- **Overlapping Subproblems:** Recomputations of same subproblems can be avoided by using memoization.

#### Steps:

1. Build a matrix `dp[][]` of size `N*N` for memoization.
2. Use recursive calls to find the minimum number of multiplications.
3. If a value is already calculated, return the minimum value from `dp[i][j]`.
4. Otherwise, perform recursive calls.
5. The value stored at `dp[0][N-1]` is the required answer.

### 2. Dynamic Programming (Tabulation - Iterative Approach)

In this approach, we iteratively find the number of multiplications required to multiply adjacent matrices and then build upon the answer until the range becomes `[0, N-1]`.

#### Steps:

1. Iterate from `l = 2` to `N-1` denoting the length of the range.
2. Iterate from `i = 0` to `N-1`.
3. Find the right end of the range `(j)` having `l` matrices.
4. Iterate from `k = i+1` to `j` which denotes the point of partition.
5. Multiply the matrices in range `(i, k)` and `(k, j)`.
6. Calculate the total number of multiplications.
7. The value stored at `dp[1][N-1]` is the required answer.

### Complexity Analysis

- **Time Complexity:** O(N^3)
- **Auxiliary Space:** O(N^2)

