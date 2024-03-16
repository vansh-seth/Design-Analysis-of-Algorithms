# Activity Selection Problem

## Overview

This contains a C program to solve the activity selection problem. The activity selection problem is a classic problem in computer science where the goal is to select the maximum number of non-overlapping activities from a set of activities, each with a start and finish time. The provided C program implements a greedy algorithm to solve this problem efficiently.

## Provided Code Explanation

The provided C program (`activity_selection.c`) contains a function `printMaxActivities` to print the maximum set of non-overlapping activities that can be performed by a single person. It takes three parameters:
- `start[]`: An array containing the start times of activities.
- `finish[]`: An array containing the finish times of activities.
- `n`: The number of activities.

The main logic of the program is in the `printMaxActivities` function, which iterates through the activities and selects those that do not overlap with each other. It prints the indices of the selected activities.

## Example

Consider the following example:

```c
int start[] = { 1, 3, 0, 5, 8, 5 };
int finish[] = { 2, 4, 6, 7, 9, 9 };
int n = sizeof(start) / sizeof(start[0]); 

printMaxActivities(start, finish, n);
```

The output will be:

```
Following activities are selected
0 1 3 4
```

This means that activities with indices 0, 1, 3, and 4 are selected, corresponding to activities starting at times 1, 3, 5, and 8, respectively.

## Time Complexity

The time complexity of the provided algorithm is O(n), where n is the number of activities. This is because the algorithm iterates through the activities once to select the non-overlapping ones.

## Space Complexity

The space complexity of the algorithm is O(1), as it only requires a constant amount of extra space regardless of the input size.


