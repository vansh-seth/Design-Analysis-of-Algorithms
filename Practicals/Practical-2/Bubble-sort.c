#include <stdio.h>
#include <stdlib.h>

void bubblesort(int arr[], int step)
{
  for(int i = 0; i < step - 1; i++)
    {
      for(int j = 0; i < i- step-1;j++)
        {
          if (arr[j] > arr[j+1])
          {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
          }
        }
    }
}

void printsort (int arr[], int step)
{
  for (int i = 0; i < step -1; i++)
    {
      printf("%d",arr[j]);
    }
}
int main()
{
  int a[] = {14,4,6,32,1,4,5};
  size = sizeof(a)/sizeof(a[0]);
  bubblesort(a,size);
  printf("Sorted array:");
  printsort(a,size);
}
