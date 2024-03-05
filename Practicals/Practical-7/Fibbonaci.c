#include <stdio.h>
#include <time.h>
void multiply(int F[2][2], int M[2][2]) {
    int x =  F[0][0]*M[0][0] + F[0][1]*M[1][0];
    int y =  F[0][0]*M[0][1] + F[0][1]*M[1][1];
    int z =  F[1][0]*M[0][0] + F[1][1]*M[1][0];
    int w =  F[1][0]*M[0][1] + F[1][1]*M[1][1];

    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}
void power(int F[2][2], int n) {
    if (n <= 1)
        return;

    int M[2][2] = {{1,1},{1,0}};
    power(F, n/2);
    multiply(F, F);
    if (n%2 != 0)
        multiply(F, M);
}
int fib(int n) {
    if (n <= 0)
        return 0;
    int F[2][2] = {{1,1},{1,0}};
    power(F, n-1);
    return F[0][0];
}

int main() {
    int n;
    clock_t start, end;
    double cpu_time_used;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    start = clock(); 

    printf("The Fibonacci sequence up to the %dth number is:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", fib(i));
    }
    printf("\n");

    end = clock(); 
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("Time taken to compute the Fibonacci sequence: %f seconds\n", cpu_time_used);

    return 0;
}
