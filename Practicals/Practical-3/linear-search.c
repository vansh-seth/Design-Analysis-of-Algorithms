#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10000 

void Random(int array[], int size) 
{
    srand(time(NULL)); 
    for (int i = 0; i < size; i++) 
    {
        array[i] = rand() % 1000;
    }
}

int search(int array[], int n, int x, float time_taken) 
{
    time_t start, end;
    start = time(NULL);
    for (int i = 0; i < n; i++)
    {
        if (array[i] == x)
        {
            end = time(NULL);
            time_taken = difftime(end, start);
            return i;
        }
    }
    end = time(NULL);
    time_taken = difftime(end, start);
    return -1;
}

int main() {
    int array[SIZE];
    Random(array, SIZE);
    float time_taken;
    int x = 234;
    int result = search(array, SIZE, x, time_taken);
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

/*
Output:
Element found at index: 1113
Time taken: 0.000000 seconds
*/
