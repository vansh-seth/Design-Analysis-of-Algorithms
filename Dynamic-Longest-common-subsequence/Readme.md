# Longest Common Subsequence (LCS)
The Longest Common Subsequence (LCS) problem involves finding the length of the longest subsequence that is common to two given strings, S1 and S2.

## Problem Statement

Given two strings, S1 and S2, the task is to find the length of the Longest Common Subsequence (LCS), which is the longest subsequence present in both strings.

## Example

### Input:

- String S1: "AGGTAB"
- String S2: "GXTXAYB"

### Output:

- Length of LCS: 4

### Explanation:

- The longest subsequence present in both strings is "GTAB", which has a length of 4.

## Approaches

### 1. LCS using Memoization

- This approach utilizes recursion with memoization to avoid recomputation of overlapping subproblems.
- It has optimal substructure and overlapping subproblems, making it suitable for dynamic programming.
- By storing results of unique states in a 2D array, we can efficiently compute the LCS.

### 2. LCS using Bottom-Up (Tabulation)

- This approach involves building a 2D array (`dp`) to store the lengths of common subsequences iteratively.
- We initialize the `dp` array and then traverse through the strings to populate it based on certain conditions.
- Finally, the last element of the `dp` array contains the length of the LCS.

## Time and Space Complexity

- **Time Complexity:** O(m * n), where m and n are the lengths of the input strings.
  - This complexity is much better than the worst-case time complexity of the naive recursive implementation.
- **Auxiliary Space:** O(m * n), as the algorithm uses a 2D array of size (m+1)*(n+1) to store the lengths of common subsequences.

## Usage

You can utilize the provided code snippets to implement either the memoization or bottom-up approach for finding the LCS of two given strings. These approaches offer efficient solutions with different trade-offs in terms of space and time complexity.

