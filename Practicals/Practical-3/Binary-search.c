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

int bin(int array[], int x, int low, int high, float time_taken) 
{
    time_t start, end;
    start = time(NULL);
    while (low <= high) 
    {
        int mid = low + (high - low) / 2;
        if (array[mid] == x)
        {
            end = time(NULL);
            time_taken = difftime(end, start);
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
    end = time(NULL);
    time_taken = difftime(end, start);
    return -1;
}

int main() {
    int array[SIZE];
    sorted(array, SIZE);
    float time_taken;
    int x = 9999;
    int result = bin(array, x, 0, SIZE, time_taken); 
    if (result == -1)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Element found at index: %d\n", result);
    }
    printf("Time taken: %f seconds\n", time_taken);
}
