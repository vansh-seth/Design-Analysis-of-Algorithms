# Quicksort Algorithm README

## Overview
Quicksort is a highly efficient sorting algorithm based on the divide and conquer approach. It works by selecting a pivot element, partitioning the array around the pivot, and recursively sorting the subarrays.

## Key Steps
1. **Selecting the Pivot Element:**
   - The pivot element is crucial for partitioning the array. In our implementation, we choose the rightmost element as the pivot.

2. **Rearranging the Array:**
   - Elements are rearranged so that those smaller than the pivot are on the left, and those greater are on the right.
   - This step involves pointer manipulation and swapping to achieve the desired arrangement.

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
