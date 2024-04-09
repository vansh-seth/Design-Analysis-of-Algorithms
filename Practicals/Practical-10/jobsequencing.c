#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Job {
    char id;
    int dead;
    int profit;
} Job;

int min(int num1, int num2) {
    return (num1 > num2) ? num2 : num1;
}

void sort(Job arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].profit < arr[j + 1].profit) {
                Job temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void JobScheduling(Job arr[], int n) {
    sort(arr, n);
    int result[n];
    bool slot[n]; 
    for (int i = 0; i < n; i++)
        slot[i] = false;
    for (int i = 0; i < n; i++) {
        for (int j = min(n, arr[i].dead) - 1; j >= 0; j--) {
            if (slot[j] == false) {
                result[j] = i;
                slot[j] = true; 
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
        if (slot[i])
            printf("%c ", arr[result[i]].id);
}
int main() {
    Job arr[] = { { 'a', 2, 100 },
                  { 'b', 1, 19 },
                  { 'c', 2, 27 },
                  { 'd', 1, 25 },
                  { 'e', 3, 15 } };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Following is maximum profit sequence of jobs \n");
    JobScheduling(arr, n);
    return 0;
}
