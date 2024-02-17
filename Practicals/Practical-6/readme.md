# Selection Sort Algorithm

Selection sort is a straightforward sorting algorithm that iteratively selects the smallest element from the unsorted portion of the list and moves it to the beginning.

## How Selection Sort Works

1. **Initialization**: Set the first element as the initial minimum.

2. **Selection Process**:
   - Start comparing the minimum with the second element. If the second element is smaller, update the minimum.
   - Continue comparing the minimum with subsequent elements, updating it if a smaller element is found.

3. **Placement**: After each iteration, place the minimum element at the front of the unsorted list.

4. **Repeat**: Iterate through the unsorted portion of the list, repeating steps 2 and 3 until all elements are in their correct positions.

## Selection Sort Algorithm

```
selectionSort(array, size)
  repeat (size - 1) times
  set the first unsorted element as the minimum
  for each of the unsorted elements
    if element < currentMinimum
      set element as new minimum
  swap minimum with first unsorted position
end selectionSort

```

### Explanation:

- `array`: Array to be sorted.
- `size`: Length of the array.
- We traverse through the array and find the index of the minimum element (`min_idx`) in the unsorted portion of the array.
- We then swap the minimum element with the first unsorted element.
- This process continues until the entire array is sorted.

## Example Usage:

```
arr = [64, 25, 12, 22, 11]
selection_sort(arr)
print("Sorted array is:", arr)
```

### Output:

```
Sorted array is: [11, 12, 22, 25, 64]
```

Selection sort is not the most efficient sorting algorithm, but it's simple to understand and implement, making it useful for educational purposes and small datasets.
