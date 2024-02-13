
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
### Time Complexity

- **Best Case Complexity**: O(n*log n)
- **Worst Case Complexity**: O(n*log n)
- **Average Case Complexity**: O(n*log n)

Merge Sort demonstrates consistent performance across various scenarios due to its divide-and-conquer approach.

### Space Complexity

Merge Sort has a space complexity of O(n). This space requirement arises mainly from the need for auxiliary arrays during the merging process.

### Stability

Merge Sort is stable, meaning it preserves the relative order of equal elements during the sorting process.

### Applications

Merge Sort finds applications in various domains:

- **Inversion Count Problem**: Merge Sort efficiently solves the inversion count problem, where the task is to find the number of inversions required to make an array sorted.
- **External Sorting**: Due to its efficient use of external memory, Merge Sort is suitable for sorting large datasets stored on external storage devices like hard drives.
- **E-commerce Applications**: Merge Sort's stable performance makes it suitable for sorting product listings, customer data, and transaction records in e-commerce applications.
