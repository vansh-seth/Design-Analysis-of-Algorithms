#include <stdio.h>
#include <time.h>

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int array[], int low, int high) 
{
    int i = low; 
    int j = high; 
    int pivot = array[i]; 
    while (i < j) 
    {
        while (array[i] <= pivot)
            i++;

        while (array[j] > pivot)
            j--;

        if (i < j)
            swap(&array[i], &array[j]);
    }
    
    swap(&array[low], &array[j]); 
    return j;
}

void quickSort(int array[], int low, int high) 
{
    if (low < high) 
    {
        clock_t start, end;
        start = clock();
        int pi = partition(array, low, high);
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
        end = clock();
        double time_taken = ((double)(end - start))/CLOCKS_PER_SEC;
        printf("Time taken: %f seconds\n", time_taken);
    }
}
void printArray(int array[], int size) 
{
    for (int i = 0; i < size; ++i) 
    {
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
}

/*
Output:

Unsorted Array
8  7  2  1  0  9  6  
Time taken: 0.000001 seconds
Time taken: 0.000013 seconds
Time taken: 0.000032 seconds
Sorted array in ascending order: 
0  1  2  6  7  8  9 

*/
