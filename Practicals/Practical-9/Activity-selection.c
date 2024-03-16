#include <stdio.h> 
#include <time.h> 
void printMaxActivities(int start[], int finish[], int n) 
{ 
	int i, j; 
	printf("Following activities are selected\n");
	i = 0; 
	printf("%d ", i);
	for (j = 1; j < n; j++) { 
		if (start[j] >= finish[i]) { 
			printf("%d ", j); 
			i = j; 
		} 
	} 
} 
 
int main() 
{ 
	int start[] = { 1, 3, 0, 5, 8, 5 }; 
	int finish[] = { 2, 4, 6, 7, 9, 9 }; 
	int n = sizeof(start) / sizeof(start[0]);  
	clock_t starts = clock();
	printMaxActivities(start, finish, n); 
    clock_t end = clock();
    double time_taken = ((double) (end - starts)) / CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n", time_taken);
	return 0; 
}
