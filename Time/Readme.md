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

