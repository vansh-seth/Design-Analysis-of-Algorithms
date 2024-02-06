# Linear Search
Linear search is a sequential searching algorithm where we start from one end and check every element of the list until the desired element is found. It is the simplest searching algorithm.

## How Linear Search Works?

The following steps are followed to search for an element k = 1 in the list below.

![image](https://github.com/vansh-seth/DSA/assets/111755254/bb1dd281-cebb-4339-addb-6dfc5c0eafbe)

1. Start from the first element, compare k with each element x.

![image](https://github.com/vansh-seth/DSA/assets/111755254/e5e5d5f4-90bb-421d-81a1-6764e7c8ee99)

2. If x == k, return the index.

![image](https://github.com/vansh-seth/DSA/assets/111755254/eddb73e9-7958-4092-97df-04b07942e2e6)

3. Else, return not found.

## Linear Search Algorithm
```c
LinearSearch(array, key)
  for each item in the array
    if item == value
      return its index
```

## Linear Search Complexities
**Time Complexity:** `O(n)`

**Space Complexity:** `O(1)`

## Linear Search Applications
For searching operations in smaller arrays (<100 items).
