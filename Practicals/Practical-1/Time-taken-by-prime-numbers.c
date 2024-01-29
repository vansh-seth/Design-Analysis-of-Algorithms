#include <stdio.h>
#include <time.h>
int main() 
{
    time_t start,end;
    clock_t t;
    t = clock();
    start  = time (NULL);
    int i, a = 1, count; 
    while(a <= 15000)
    {
        count = 0;
        i = 2;
        while(i <= a/2)
        {
            if(a%i == 0)
            {
                count++;
                break;
            }
            i++;	
        }	
        if(count == 0 && a != 1 )
        {
            printf(" %d ", a);
        }
        a++; 
    }
    end = time(NULL);
    printf("\ntime taken = %f\n", difftime(end,start));
    t = clock() - t;
    printf("clicks %ld (%f seconds)\n",t,((float)t)/CLOCKS_PER_SEC);
    
}
