# Heap Sort Algorithm Readme

Heap Sort is a powerful and efficient sorting technique widely used in computer programming. To understand how to implement the heap sort algorithm, it's essential to grasp two fundamental data structures: arrays and trees.

The initial set of numbers we aim to sort resides in an array, such as `[10, 3, 76, 34, 23, 32]`. After sorting, we achieve a sorted array like `[3, 10, 23, 32, 34, 76]`.

Heap sort operates by conceptualizing the array elements as a specialized form of a complete binary tree known as a heap.

## Relationship between Array Indexes and Tree Elements

A complete binary tree possesses an intriguing property that aids in finding the children and parents of any node.

Given an element's index `i` in the array:

- The left child resides at index `2i + 1`.
- The right child resides at index `2i + 2`.
- The parent of an element at index `i` is located at index `(i - 1) / 2`.

Understanding this mapping of array indices to tree positions is crucial for comprehending the functionality of the Heap Data Structure and its role in implementing Heap Sort.

## Heap Data Structure

A heap is a specialized tree-based data structure. A binary tree adheres to a heap data structure if:

- It is a complete binary tree.
- All nodes in the tree follow the property that they are greater than their children (in a max-heap). Conversely, in a min-heap, nodes are smaller than their children.

## Heapify: Modifying the Tree

To transform a complete binary tree into a Max-Heap, we apply a function called heapify to all non-leaf elements of the heap.

Heapify is a recursive function that adjusts the elements to ensure the max-heap property holds true.

## Implementation of Heapify Function

```c
void heapify(int arr[], int n, int i) {
  // Find the largest among root, left child, and right child
  int largest = i;
  int left = 2 * i + 1;
  int right = 2 * i + 2;

  if (left < n && arr[left] > arr[largest])
    largest = left;

  if (right < n && arr[right] > arr[largest])
    largest = right;

  // Swap and continue heapifying if the root is not the largest
  if (largest != i) {
    swap(&arr[i], &arr[largest]);
    heapify(arr, n, largest);
  }
}
```

This function efficiently handles both the base case and trees of any size. It moves the root element to its correct position, ensuring the max-heap property holds for any tree size, provided the sub-trees are max-heaps.

