Sure, here's a rewritten version for your README.md file:

---

# 0/1 Knapsack Problem

The 0/1 Knapsack Problem is a classic optimization problem in computer science and combinatorial optimization. Given a set of items, each with a weight and a value, determine the number of each item to include in a knapsack so that the total weight is less than or equal to a given limit, and the total value is maximized.

## Problem Statement

Given N items, each with its own weight and profit, and a knapsack with a maximum capacity W, the task is to determine the maximum possible profit that can be achieved by filling the knapsack with items, where each item can either be included or excluded (hence, the 0/1 aspect of the problem).

## Example

### Input:

- Number of items (N): 3
- Knapsack capacity (W): 4
- Profits of items: {1, 2, 3}
- Weights of items: {4, 5, 1}

### Output:

- Maximum possible profit: 3

### Explanation:

- The items with weights 4 and 1 can be included in the knapsack, but not both together due to the knapsack's capacity limitation.
- If we select the item with weight 4, the possible profit is 1.
- If we select the item with weight 1, the possible profit is 3.
- Thus, the maximum possible profit achievable is 3.

## Approaches

### 1. Dynamic Programming Approach

The problem can be efficiently solved using dynamic programming. We create a 2D array to store the maximum profit that can be achieved for different combinations of items and knapsack capacities.

### 2. Memoization Approach

We can optimize the dynamic programming solution by memoizing the results of subproblems. This helps avoid recalculating the same subproblems multiple times, improving efficiency.

### 3. Bottom-up Approach

In the bottom-up approach, we construct the solution iteratively by starting from smaller subproblems and gradually building up to the main problem. This approach eliminates the need for recursion and reduces overhead.

## Time and Space Complexity

- **Time Complexity:** O(N * W), where N is the number of items and W is the capacity of the knapsack.
- **Space Complexity:** O(N * W), due to the use of a 2D array to store the results of subproblems.

## Usage

You can use the provided code snippet to solve the 0/1 Knapsack Problem for your specific input by passing the profits, weights, and knapsack capacity to the `knapSack` function.

```c
int profit[] = { 60, 100, 120 };
int weight[] = { 10, 20, 30 };
int W = 50;
int n = sizeof(profit) / sizeof(profit[0]);
printf("%d", knapSack(W, weight, profit, n));
```
