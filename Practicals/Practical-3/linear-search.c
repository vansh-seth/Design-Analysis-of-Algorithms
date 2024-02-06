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

int search(int array[], int n, int x) 
{
    clock_t start, end;
    start = clock();
    for (int i = 0; i < n; i++)
    {
        if (array[i] == x)
        {
            end = clock();
            double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
            printf("Time taken: %f seconds\n", time_taken);
            return i;
        }
    }
    end = clock();
    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n", time_taken);
    return -1;
}

int main() {
    int array[SIZE];
    Random(array, SIZE);
    int x = 234;
    int result = search(array, SIZE, x);
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
Output
Time taken: 0.000005 seconds
Element found at index: 1750
*/
