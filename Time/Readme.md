## Using the `time.h` Header File in C

The `time.h` header file provides functionality to work with date and time in C programs. It defines several data types and functions for manipulating time-related information.

### Data Types Defined in `time.h`

1. **`clock_t`**: Represents processor time consumed by a program.
2. **`time_t`**: Represents calendar time.
3. **`struct tm`**: Represents date and time components.

```c
struct tm {
    int tm_sec;   // seconds (0 - 59)
    int tm_min;   // minutes (0 - 59)
    int tm_hour;  // hours (0 - 23)
    int tm_mday;  // day of the month (1 - 31)
    int tm_mon;   // month (0 - 11)
    int tm_year;  // years since 1900
    int tm_wday;  // day of the week (0 - 6)
    int tm_yday;  // day in the year (0 - 365)
    int tm_isdst; // daylight saving time
};
```

### Pre-defined Functions in `time.h`

| S.No | Function Name | Explanation |
|------|---------------|-------------|
| 1.   | `asctime()`   | Returns the date and time in a specific format. |
| 2.   | `clock()`     | Returns processor time consumed by a program. |
| 3.   | `ctime()`     | Returns the date and time in a specific format based on the calendar time. |
| 4.   | `difftime()`  | Returns the difference between two times. |
| 5.   | `gmtime()`    | Converts calendar time to Coordinated Universal Time (UTC). |
| 6.   | `mktime()`    | Converts a `struct tm` object to calendar time. |
| 7.   | `time()`      | Returns the current calendar time. |
| 8.   | `strftime()`  | Formats the string returned by other time functions using different format specifiers. |

### Examples

Here are some examples demonstrating the usage of functions defined in `time.h`:

1. **Printing the Date and Time of the System**
```c
#include <stdio.h>
#include <time.h>

int main(void) {
    struct tm* ptr;
    time_t t;
    t = time(NULL);
    ptr = localtime(&t);
    printf("%s", asctime(ptr));
    return 0;
}
```

2. **Printing UTC (Coordinated Universal Time) of the System**
```c
#include <stdio.h>
#include <time.h>

int main(void) {
    struct tm* ptr;
    time_t t;
    t = time(NULL);
    ptr = gmtime(&t);
    printf("%s", asctime(ptr));
    return 0;
}
```

3. **Calculating the Time Taken to Add Two Numbers**
```c
#include <stdio.h>
#include <time.h>

int main(void) {
    time_t start, end;
    start = time(NULL);
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Sum of %d and %d is %d\n", a, b, a + b);
    end = time(NULL);
    printf("Time taken to print sum is %.2f seconds", difftime(end, start));
    return 0;
}
```

4. **Finding the Clock Ticks**
```c
#include <stdio.h>
#include <time.h>
#include <math.h>

int frequency_of_primes(int n) {
    int i, j;
    int freq = n - 1;
    for (i = 2; i <= n; ++i)
        for (j = sqrt(i); j > 1; --j)
            if (i % j == 0) {
                --freq;
                break;
            }
    return freq;
}

int main() {
    clock_t t;
    int f;
    t = clock();
    f = frequency_of_primes(9999);
    printf("The number of primes lower than 10,000 is: %d\n", f);
    t = clock() - t;
    printf("No. of clicks %ld clicks (%f seconds).\n", t, ((float)t) / CLOCKS_PER_SEC);
    return 0;
}
```

5. **Printing Time as Hour:Minute using `strftime()`**
```c
#include <stdio.h>
#include <time.h>

int main() {
    time_t rawtime;
    struct tm* timeinfo;
    char buffer[80];
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    strftime(buffer, 80, "Time is %I:%M%p.", timeinfo);
    puts(buffer);
    return 0;
}
```
