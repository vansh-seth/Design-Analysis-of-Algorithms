#include <stdio.h>
#include <time.h>
int main() {
    struct tm* ptr;
    time_t t;
    t = time(NULL);
    ptr = gmtime(&t);
    printf("%s", asctime(ptr));
}
