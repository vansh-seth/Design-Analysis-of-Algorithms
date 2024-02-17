# Selection Sort Algorithm

Selection sort is a simple sorting algorithm that repeatedly selects the smallest element from the unsorted part of the array and moves it to the beginning. Here's how it works:

## Overview:

1. **Initialization**: Set the first element as the initial minimum.
2. **Selection Process**:
   - Compare the minimum with the second element. If the second element is smaller, update the minimum.
   - Continue comparing the minimum with subsequent elements, updating it if a smaller element is found.
3. **Placement**: After each iteration, place the minimum element at the front of the unsorted list.
4. **Repeat**: Iterate through the unsorted portion of the list, repeating steps 2 and 3 until all elements are in their correct positions.

## Algorithm:

```c
#include <stdio.h>

// Function to perform Selection Sort
void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;
    
    // Traverse through all array elements
    for (i = 0; i < n - 1; i++) {
        // Find the minimum element in the unsorted array
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        // Swap the found minimum element with the first element
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("Original array: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    selectionSort(arr, n);
    
    printf("\nSorted array in ascending order: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
```

## Explanation:

- `arr`: Array to be sorted.
- `n`: Number of elements in the array.
- We traverse through the array and find the index of the minimum element (`minIndex`) in the unsorted portion of the array.
- We then swap the minimum element with the first unsorted element.
- This process continues until the entire array is sorted.

## Example Output:

```
Original array:
64 25 12 22 11

Sorted array in ascending order:
11 12 22 25 64
```

Selection sort, though not the most efficient, is easy to understand and implement, making it suitable for educational purposes and small datasets.
