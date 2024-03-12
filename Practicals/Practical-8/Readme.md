# Knapsack Problem Solution

## Overview
The knapsack problem involves selecting items to maximize the total value while ensuring that the total weight does not exceed a given limit. In this particular variation, items can be inserted fractionally, allowing for a more flexible approach.

## Approach
To solve the knapsack problem efficiently, we can use a greedy approach based on the ratio of value to weight. The higher the ratio, the more valuable the item is relative to its weight. By sorting the items based on this ratio in descending order, we can iteratively add items to the knapsack until its weight limit is reached.

## Example
Let's consider an example with the following input:
```
Items: {(20, 4), (63, 7), (40, 8), (30, 5)}
Knapsack capacity: K = 18
```
Explanation:
1. Calculate the ratio of value to weight for each item.
2. Sort the items in descending order of their ratios.
3. Iteratively add items to the knapsack until the weight limit is reached, considering fractional insertion if necessary.
4. Compute the total value of items in the knapsack.

For the given input:
```
Item 2 (63/7) - Ratio = 9
Item 4 (30/5) - Ratio = 6
Item 1 (20/4) - Ratio = 5
Item 3 (40/8) - Ratio = 5
```
Knapsack capacity (K) is 18. Therefore, we can fit:
```
Item 2 weight + Item 4 weight + Item 1 weight + 1/4 (Item 3 weight) = 18
```
Hence, the value of the knapsack is:
```
63 + 30 + 20 + 1/4(40) = 123
```

## Code Implementation
Refer to the provided code for an implementation of the knapsack problem solution in c. The code efficiently calculates the maximum value achievable within the given constraints.
