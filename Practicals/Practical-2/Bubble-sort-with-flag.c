#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
void bubblesort(int arr[], int step)
{
    time_t start, end;
    clock_t t;
    t = clock();
    start = time(NULL);
    for(int i = 0; i < step - 1; i++)
    {
        bool flag = false;
        for(int j = 0; j < step - i - 1;j++)
        {
          if (arr[j] > arr[j+1])
          {
            flag = true;
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
          }
          if (!flag)
          {
              end = time(NULL);
              t = clock() - t;
              printf("\n time taken = %f\n", difftime(end, start));
              printf("clicks = %d (%f sec)\n",t,((float)t)/CLOCKS_PER_SEC);
              return;
          }
        }
    }
    end = time(NULL);
    t = clock()- t;
    printf("\n time taken = %f\n", difftime(end, start));
    printf("clicks = %d (%f sec)\n",t,((float)t)/CLOCKS_PER_SEC);
}

void printsort (int arr[], int step)
{
  for (int i = 0; i < step; i++)
    {
      printf("%d\n",arr[i]);
    }
}
int main()
{
  int a[] = {1,2,3,4,5,6};
  int size = sizeof(a) / sizeof(a[0]);
  bubblesort(a,size);
  printf("Sorted array:");
  printsort(a,size);
  
}
