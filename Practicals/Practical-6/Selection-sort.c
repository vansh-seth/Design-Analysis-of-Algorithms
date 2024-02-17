#include <stdio.h>
#include <time.h>

void selectionSort(int array[], int size) 
{
    clock_t start = clock();
    for (int step = 0; step < size - 1; step++) 
    {
        int min_idx = step;
        for (int i = step + 1; i < size; i++) 
        {
            if (array[i] < array[min_idx])
                min_idx = i;
        }
        if (min_idx != step){
            int temp = array[min_idx];
            array[min_idx] = array[step];
            array[step] = temp;
        }
    }
    clock_t end = clock();
    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n", time_taken);
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

int main() {
    int data[] = {20, 12, 10, 15, 2};
    int size = sizeof(data) / sizeof(data[0]);
    selectionSort(data, size);
    printf("Sorted array in Ascending Order:\n");
    printArray(data, size);
    return 0;
}

/*
Output:

Time taken: 0.000002 seconds
Sorted array in Ascending Order:
2  10  12  15  20  

*/
