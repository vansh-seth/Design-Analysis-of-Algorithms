# Quicksort Algorithm 

## Overview
Quicksort is a highly efficient sorting algorithm based on the divide and conquer approach. It works by selecting a pivot element, partitioning the array around the pivot, and recursively sorting the subarrays.

## Key Steps
1. **Selecting the Pivot Element:**
   - The pivot element is crucial for partitioning the array. In our implementation, we choose the rightmost element as the pivot.

2. **Rearranging the Array:**
   - Elements are rearranged so that those smaller than the pivot are on the left, and those greater are on the right.
   - This step involves pointer manipulation and swapping to achieve the desired arrangement.
   - 
3. **Dividing Subarrays:**
   - Subarrays are recursively partitioned and sorted until each subarray contains only one element.
   - The process continues until the entire array is sorted.

## Algorithm Steps
- **`quickSort(array, leftmostIndex, rightmostIndex)`:**
  - Recursively sorts the array by selecting a pivot, partitioning, and sorting the subarrays.
  - Stops when the `leftmostIndex` is not less than `rightmostIndex`.

- **`partition(array, leftmostIndex, rightmostIndex)`:**
  - Sets the rightmost element as the pivot.
  - Partitions the array around the pivot, ensuring elements smaller than the pivot are on the left and larger ones are on the right.
  - Returns the index of the pivot element after partitioning.

## Usage
- To use the quicksort algorithm:
  - Call `quickSort(array, 0, length - 1)` where `array` is the array to be sorted, `0` is the index of the leftmost element, and `length - 1` is the index of the rightmost element.

## Visual Illustrations
- Visual aids help to understand the step-by-step process of quicksort, including how elements are sorted around the pivot.

## Example
```python
array = [5, 3, 8, 6, 2, 7, 1, 4]
quickSort(array, 0, len(array) - 1)
print("Sorted array:", array)
```

## Time Complexities
- **Worst Case Complexity [Big-O]:** O(n^2)
  - Occurs when the pivot is the greatest or smallest element, leading to unbalanced partitions.
  - One sub-array becomes empty, resulting in recursive calls on n - 1 elements.
- **Best Case Complexity [Big-omega]:** O(n*log n)
  - Occurs when the pivot is the middle or close to the middle element, leading to balanced partitions.
- **Average Case Complexity [Big-theta]:** O(n*log n)
  - Prevails when the pivot selection doesn't lead to extreme cases.

## Space Complexity
- Quicksort has a space complexity of O(log n) due to its recursive nature.

## Quicksort Applications
- Quicksort is preferred:
  - in languages supporting recursion well.
  - when time and space complexities are critical factors.

## Algorithm Overview
- **Selecting the Pivot:**
  - Pivot selection greatly influences performance.
- **Rearranging the Array:**
  - Elements are sorted around the pivot, ensuring smaller elements are on the left and larger ones on the right.
- **Divide and Conquer:**
  - Subarrays are recursively sorted until each subarray contains only one element.

## Usage
- To apply quicksort:
  - Call `quickSort(array, 0, length - 1)` with `array` as the input array and proper indices.

## Visual Illustrations
- Visual aids demonstrate step-by-step execution, aiding comprehension.

## Conclusion
- Quicksort, with its elegant divide-and-conquer strategy, offers an efficient solution for sorting.
- It achieves optimal performance when the pivot selection is balanced.
- Quicksort remains a popular choice where time and space efficiency are crucial considerations.

# Random Pivoting in Quicksort using Lomuto Partitioning

## Introduction
Quicksort is a highly efficient sorting algorithm known for its in-place partitioning and recursive sorting approach. By employing random pivoting, we can further enhance its time complexity, making it even more efficient compared to deterministic pivoting strategies.

## Key Concepts
- **Partitioning Arrays:** Quicksort partitions the array in place such that elements to the left of the pivot are smaller, while those to the right are greater.
- **Recursive Sorting:** After partitioning, Quicksort recursively sorts the left and right subarrays.
- **Random Pivoting:** The pivot element is selected randomly from the array, leading to improved time complexity and avoiding worst-case scenarios.

## Algorithm Steps
- **`partition(arr[], lo, hi)`:**
  - Lomuto partition scheme is used.
  - Selects the pivot as the last element (`arr[hi]`).
  - Elements smaller than or equal to the pivot are placed to the left, and greater elements to the right.
  - Returns the index of the pivot after partitioning.

- **`partition_r(arr[], lo, hi)`:**
  - Randomly selects an index `r` between `lo` and `hi`.
  - Swaps the element at index `r` with the last element (`arr[hi]`).
  - Calls `partition(arr, lo, hi)` to perform partitioning with the randomly selected pivot.

- **`quicksort(arr[], lo, hi)`:**
  - Recursively sorts the array.
  - Calls `partition_r(arr, lo, hi)` to select a random pivot and partition the array.
  - Continues recursively sorting the left and right subarrays until the entire array is sorted.

## Code Example
```python
def partition(arr, lo, hi):
    pivot = arr[hi]
    i = lo
    for j in range(lo, hi):
        if arr[j] <= pivot:
            arr[i], arr[j] = arr[j], arr[i]
            i += 1
    arr[i], arr[hi] = arr[hi], arr[i]
    return i

def partition_r(arr, lo, hi):
    import random
    r = random.randint(lo, hi)
    arr[r], arr[hi] = arr[hi], arr[r]
    return partition(arr, lo, hi)

def quicksort(arr, lo, hi):
    if lo < hi:
        p = partition_r(arr, lo, hi)
        quicksort(arr, lo, p - 1)
        quicksort(arr, p + 1, hi)
```

## Conclusion
- Quicksort with random pivoting using Lomuto partitioning offers improved time complexity and better performance.
- By randomly selecting pivots, we mitigate the risk of worst-case scenarios, ensuring more consistent performance across various datasets.
- The algorithm's simplicity and efficiency make it a preferred choice for sorting large datasets when performance matters.

**Note:**
Using random pivoting we improve the expected or average time complexity to O (N log N). The Worst-Case complexity is still O ( N^2 ).

