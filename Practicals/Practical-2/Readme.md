## Bubble Sort

Bubble sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

### Introduction

Bubble sort gets its name because smaller elements bubble to the top of the list with each iteration, like air bubbles rising to the surface in water.

### Working of Bubble Sort

#### 1. First Iteration (Compare and Swap)

- Starting from the first index, compare the first and the second elements.
- If the first element is greater than the second element, swap them.
- Compare the second and the third elements and swap if necessary.
- This process continues until the last element is reached.

#### 2. Remaining Iterations

- The same process continues for the remaining iterations.
- After each iteration, the largest element among the unsorted elements is placed at the end.
- Comparison occurs up to the last unsorted element in each iteration.
- The array is considered sorted when all elements are in the correct order.

### Visualization

![image](https://github.com/vansh-seth/Design-Analysis-of-Algorithms/assets/111755254/5b7057f0-609d-4b01-9777-c4ca41cdf9c8)


### Complexity

- **Time Complexity**: 
    - Best Case: O(n) - when the array is already sorted.
    - Average Case: O(n^2) - comparisons and swaps.
    - Worst Case: O(n^2) - when the array is in reverse order.
- **Space Complexity**: O(1) - constant space required.

