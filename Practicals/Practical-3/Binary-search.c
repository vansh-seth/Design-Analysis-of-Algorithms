#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10000 

void sorted(int array[], int size) 
{ 
    for (int i = 0; i < size; i++) 
    {
        array[i] = i;
    }
}

int bin(int array[], int x, int low, int high) 
{
    clock_t start, end;
    start = clock();
    while (low <= high) 
    {
        int mid = low + (high - low) / 2;
        if (array[mid] == x)
        {
            end = clock();
            double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
            printf("Time taken: %f seconds\n", time_taken);
            return mid;
        }
        else if (array[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    end = clock();
    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n", time_taken);
    return -1;
}

int main() {
    int array[SIZE];
    sorted(array, SIZE);
    int x = 9999;
    int result = bin(array, x, 0, SIZE - 1); 
    if (result == -1)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Element found at index: %d\n", result);
    }
    return 0;
}


/*
Output:
Time taken: 0.000001 seconds
Element found at index: 9999

*/
