
## Merge Sort Algorithm in C

Merge Sort is a well-known sorting algorithm that follows the Divide and Conquer strategy to sort arrays efficiently.

### Divide and Conquer Strategy

In Merge Sort, a problem is divided into smaller subproblems until they become simple enough to solve directly. Then, the solutions to these subproblems are combined to solve the original problem.

### Algorithm Overview

1. **Divide**: The array is divided into two halves.
2. **Conquer**: Each half is recursively sorted.
3. **Combine**: The sorted halves are merged to produce the final sorted array.

### Merge Sort Function

The `mergeSort` function recursively divides the array into halves and calls the `merge` function to merge the sorted halves.

```c
void mergeSort(int arr[], int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;
        mergeSort(arr, p, q);
        mergeSort(arr, q + 1, r);
        merge(arr, p, q, r);
    }
}
```

### Merge Function

The `merge` function merges two sorted subarrays into a single sorted array.

```c
void merge(int arr[], int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        M[j] = arr[q + 1 + j];

    int i = 0, j = 0, k = p;

    while (i < n1 && j < n2) {
        if (L[i] <= M[j])
            arr[k++] = L[i++];
        else
            arr[k++] = M[j++];
    }

    while (i < n1)
        arr[k++] = L[i++];
    while (j < n2)
        arr[k++] = M[j++];
}
```
