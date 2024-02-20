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

## Building a Max-Heap for Heap Sort

To construct a max-heap from any tree, we begin by heapifying each subtree from the bottom up, ultimately yielding a max-heap after applying the function to all elements, including the root element.

In the case of a complete tree, the index of the first non-leaf node is given by `n/2 - 1`. Subsequent nodes are leaf nodes and do not require heapification.

The steps to build a maximum heap are as follows:

1. **Initialize the Array and Calculate Indices**: We traverse the array from the last non-leaf node down to the root.

2. **Heapify Each Sub-Tree**: We apply the heapify function to each sub-tree, starting from the bottom and moving up towards the root.

By following these steps, we ensure that the max-heap property is maintained throughout the tree.

## Procedure to Build a Max-Heap for Heap Sort

### Steps:

1. **Create Array and Determine Index**: 
   - Begin by defining the array.
   - Calculate the index of the first non-leaf node (`n / 2 - 1`).

2. **Heapification Process**:
   - Heapify each subtree starting from the bottom and moving upwards.
   - Ensure that the max-heap property is maintained at each step.

### Visual Representation:

![image](https://github.com/vansh-seth/Design-Analysis-of-Algorithms/assets/111755254/24ef3dde-da7d-47fa-9923-3d464f0e4056)

![image](https://github.com/vansh-seth/Design-Analysis-of-Algorithms/assets/111755254/6be37a49-b4d6-44e3-adb9-0ecf4dca112c)

![image](https://github.com/vansh-seth/Design-Analysis-of-Algorithms/assets/111755254/f8835e0a-9578-4d14-bb01-21dd794fa87c)

![image](https://github.com/vansh-seth/Design-Analysis-of-Algorithms/assets/111755254/571800a5-e182-4532-8943-99d86345b83a)

As illustrated in the diagram above, we commence by heapifying the smallest subtrees and progressively ascending until reaching the root element.

If you've grasped the concepts thus far, you're well on your way to mastering Heap Sort.

## How Heap Sort Works

Heap Sort operates as follows:

1. **Initialization**:
   - The tree satisfies the Max-Heap property, with the largest item stored at the root node.

2. **Swap, Remove, and Heapify**:
   - Swap: Remove the root element and place it at the end of the array (nth position).
   - Remove: Decrease the size of the heap by 1.
   - Heapify: Re-heapify the root element to ensure the highest element remains at the root.
   
3. **Repetition**:
   - Repeat the process until all items in the list are sorted.

The code snippet below demonstrates the implementation:

![image](https://github.com/vansh-seth/Design-Analysis-of-Algorithms/assets/111755254/ee998ffa-bffc-459c-9658-4336d90a4c8b)

![image](https://github.com/vansh-seth/Design-Analysis-of-Algorithms/assets/111755254/f4a0a574-d341-4d7e-9bc0-8a10169166ef)

```c
// Heap sort
for (int i = n - 1; i >= 0; i--) {
  swap(&arr[0], &arr[i]);

  // Heapify root element to ensure highest element at root again
  heapify(arr, i, 0);
}
```
