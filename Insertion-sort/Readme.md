## Insertion Sort Algorithm

Insertion sort is a simple sorting algorithm that builds the final sorted array one item at a time. It is efficient for small datasets and mostly sorted datasets.

### Introduction

Insertion sort works similarly to sorting cards in a card game. It iterates through the array, considering one element at a time and inserting it into its correct position relative to the already sorted part of the array.

### Working of Insertion Sort

1. **Initial Array**: The first element in the array is assumed to be sorted. Take the second element and store it separately.
2. **Comparison and Insertion**: Compare the second element with the first element. If the first element is greater, then the second element is placed in front of it. Now, the first two elements are sorted.
3. **Iterative Sorting**: Take each subsequent element and compare it with the elements on its left. Place it just behind the element smaller than it. If there is no element smaller than it, then place it at the beginning of the array.
4. **Repeat**: Repeat the process until all elements are in their correct positions.

### Visualization

![image](https://github.com/vansh-seth/Design-Analysis-of-Algorithms/assets/111755254/4e1e954b-ed49-4f3c-bb7c-ad113c28baa7)

### Complexity

- **Time Complexity**:
  - Best Case: O(n) - when the array is already sorted.
  - Average Case: O(n^2) - comparisons and swaps.
  - Worst Case: O(n^2) - when the array is in reverse order.
- **Space Complexity**: O(1) - constant space required.
- **Stability**: Yes - maintains the relative order of equal elements.

### Applications

Insertion sort is suitable for small datasets or when only a few elements need to be sorted. It's commonly used in scenarios where the array is mostly sorted or nearly sorted.

## For further study refer to Practical 2
