# Binary Search
Binary Search is a searching algorithm for finding an element's position in a sorted array.

In this approach, the element is always searched in the middle of a portion of an array.

## Binary Search Working

Binary Search Algorithm can be implemented in two ways which are discussed below.

1. Iterative Method
2. Recursive Method

The recursive method follows the divide and conquer approach.

The general steps for both methods are discussed below.

1. The array in which searching is to be performed is:

![image](https://github.com/vansh-seth/DSA/assets/111755254/42078e44-6c4b-47d2-aa6f-9d1d5afff431)

Let `x = 4` be the element to be searched.

2. Set two pointers low and high at the lowest and the highest positions respectively.

![image](https://github.com/vansh-seth/DSA/assets/111755254/d0a7cf72-53c3-4573-b0e3-fe9687bb554e)

3. Find the middle element `mid` of the array ie. `arr[(low + high)/2] = 6`.

![image](https://github.com/vansh-seth/DSA/assets/111755254/718a5fa7-4d25-4f19-a345-f1d94e5d8f80)

4. If x == mid, then return mid.Else, compare the element to be searched with m.
5. If `x > mid`, compare `x` with the middle element of the elements on the right side of `mid`. This is done by setting `low` to `low = mid + 1`.
6. Else, compare `x` with the middle element of the elements on the left side of `mid`. This is done by setting `high` to `high = mid - 1`.

![image](https://github.com/vansh-seth/DSA/assets/111755254/af958dbd-7df4-4b82-ab12-1dd3f500a95d)

7. Repeat steps 3 to 6 until low meets high.

![image](https://github.com/vansh-seth/DSA/assets/111755254/bacfdd83-ffe0-4537-a589-598fc487f4d0)

8. `x = 4` is found.

![image](https://github.com/vansh-seth/DSA/assets/111755254/b27f117b-8468-4473-ad28-48effd6ef302)

## Binary Search Algorithm
### Iteration Method
```c
do until the pointers low and high meet each other.
    mid = (low + high)/2
    if (x == arr[mid])
        return mid
    else if (x > arr[mid]) // x is on the right side
        low = mid + 1
    else                       // x is on the left side
        high = mid - 1
```

### Recursive Method
```c
binarySearch(arr, x, low, high)
    if low > high
        return False 
    else
        mid = (low + high) / 2 
        if x == arr[mid]
            return mid
        else if x > arr[mid]        // x is on the right side
            return binarySearch(arr, x, mid + 1, high)
        else                               // x is on the left side
            return binarySearch(arr, x, low, mid - 1)
```

## Binary Search Complexity
### Time Complexities

- **Best case complexity:** `O(1)`
- **Average case complexity:** `O(log n)`
- **Worst case complexity:** `O(log n)`

### Space Complexity

The space complexity of the binary search is `O(1)`.

## Binary Search Applications

- In libraries of Java, .Net, C++ STL
- While debugging, the binary search is use
