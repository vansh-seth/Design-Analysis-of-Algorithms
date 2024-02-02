#include <stdio.h>
#include <time.h>
void insertionsort (int arr[], int size)
{
    time_t start,end;
    start = time(NULL);
    clock_t t;
    t = clock();
    int i,j,key;
    for(i = 1; i < size; i++ )
    {
        key = arr[i];
        j = i-1;
        while (j>=0 && key<arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] =key;
    }
    end = time(NULL);
    t = clock() - t;
    printf("\n time taken = %f\n", difftime(end, start));
    printf("clicks = %ld (%f sec)\n", t, ((float)t) / CLOCKS_PER_SEC);
}
void printArray(int arr[], int size) 
{
  for (int i = 0; i < size; i++) 
  {
    printf("%d \n", arr[i]);
  }
}
int main() 
{
int data[] = {9, 5, 1, 4, 3};
  int size = sizeof(data) / sizeof(data[0]);
  insertionsort(data, size);
  printf("Sorted array in ascending order:\n");
  printArray(data, size);
}
