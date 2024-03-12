#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int values[], int weights[], float ratios[], int low, int high) {
    float pivot = ratios[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (ratios[j] > pivot) {
            i++;
            swap(&values[i], &values[j]);
            swap(&weights[i], &weights[j]);
            swap(&ratios[i], &ratios[j]);
        }
    }
    swap(&values[i + 1], &values[high]);
    swap(&weights[i + 1], &weights[high]);
    swap(&ratios[i + 1], &ratios[high]);
    return i + 1;
}
void quickSort(int values[], int weights[], float ratios[], int low, int high) {
    if (low < high) {
        int pi = partition(values, weights, ratios, low, high);
        quickSort(values, weights, ratios, low, pi - 1);
        quickSort(values, weights, ratios, pi + 1, high);
    }
}
float fractionalKnapsack(int values[], int weights[], int n, int capacity) {
    float ratios[n];
    for (int i = 0; i < n; i++) {
        ratios[i] = (float) values[i] / weights[i];
    }
    quickSort(values, weights, ratios, 0, n - 1);
    float totalValue = 0.0;
    int currentWeight = 0;
    for (int i = 0; i < n; i++) {
        if (currentWeight + weights[i] <= capacity) {
            totalValue += values[i];
            currentWeight += weights[i];
        } else {
            int remainingCapacity = capacity - currentWeight;
            totalValue += ratios[i] * remainingCapacity;
            break;
        }
    }
    return totalValue;
}

int main() {
    int values[] = {10, 5, 15, 7, 6, 18, 3};
    int weights[] = {2, 3, 5, 7, 1, 4, 1};
    int n = sizeof(values) / sizeof(values[0]);
    int capacity = 15;
    float maxValue = fractionalKnapsack(values, weights, n, capacity);

    printf("Maximum value in knapsack: %.2f\n", maxValue);

    return 0;
}

/*
Output:

Maximum value in knapsack: 55.33

*/
