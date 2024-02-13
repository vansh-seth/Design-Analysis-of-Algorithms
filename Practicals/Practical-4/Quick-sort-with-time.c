#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int random_partition(int array[], int low, int high) {
    srand(time(NULL));
    int random_index = low + rand() % (high - low + 1);
    swap(&array[low], &array[random_index]);

    int pivot = array[low]; 
    int i = low;
    int j = high;

    while (i < j) {
        while (array[i] <= pivot && i <= high)
            i++;
        while (array[j] > pivot && j >= low)
            j--;
        if (i < j)
            swap(&array[i], &array[j]);
    }
    swap(&array[low], &array[j]); 
    return j;
}

void quickSort(int array[], int low, int high) {
    if (low < high) {
        clock_t start, end;
        start = clock();
        int pi = random_partition(array, low, high);
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
        end = clock();
        double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
        printf("Time taken: %f seconds\n", time_taken);
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

int main() {
    int data[] = {8, 7, 2, 1, 0, 9, 6};
    int n = sizeof(data) / sizeof(data[0]);
    printf("Unsorted Array\n");
    printArray(data, n);
    quickSort(data, 0, n - 1);
    printf("Sorted array in ascending order: \n");
    printArray(data, n);
    return 0;
}
