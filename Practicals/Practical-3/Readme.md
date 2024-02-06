# Search Algorithms Practical in C

This practical exercise covers the implementation and analysis of two fundamental search algorithms: Binary Search and Linear Search, implemented in C.

## Contents

1. [Binary Search](#binary-search)
2. [Linear Search](#linear-search)
3. [Time Complexity Analysis](#time-complexity-analysis)
4. [Conclusion](#conclusion)

---

## Binary Search

Binary search is a classic divide-and-conquer algorithm used to find the position of a target value within a sorted array.

### Implementation

The binary search algorithm involves repeatedly dividing the search interval in half until the target value is found or the interval is empty. It compares the target value to the middle element of the array and continues the search in the lower or upper half accordingly.

```c
// C implementation of binary search
int binary_search(int arr[], int target, int size) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}
```

### Time Complexity

The time complexity of binary search is O(log n), where n is the number of elements in the array. This is because the search space is halved in each iteration.

---

## Linear Search

Linear search is a simple search algorithm that checks every element in the list until the target value is found or the list is exhausted.

### Implementation

The linear search algorithm iterates through each element of the array sequentially until it finds the target value.

```c
// C implementation of linear search
int linear_search(int arr[], int target, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target)
            return i;
    }
    return -1;
}
```

### Time Complexity

The time complexity of linear search is O(n), where n is the number of elements in the array. In the worst-case scenario, the algorithm may have to iterate through all elements of the array.

---

## Time Complexity Analysis

| Algorithm     | Best Case | Average Case | Worst Case |
|---------------|-----------|--------------|------------|
| Binary Search | O(1)      | O(log n)     | O(log n)   |
| Linear Search | O(1)      | O(n/2)       | O(n)       |

The table above summarizes the time complexity analysis for both binary search and linear search algorithms.

---

## Conclusion

In conclusion, binary search is a highly efficient search algorithm for sorted arrays, providing a time complexity of O(log n). However, it requires the array to be sorted beforehand. On the other hand, linear search is simple to implement but less efficient, with a time complexity of O(n).

Understanding the strengths and weaknesses of these search algorithms is crucial for choosing the appropriate algorithm based on the problem requirements.
