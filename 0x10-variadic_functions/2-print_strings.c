#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: String to be printed between the strings.
 * @n: Number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list strings;
    unsigned int i;
    char *str;

    va_start(strings, n); // Initialize the argument list

    for (i = 0; i < n; i++)
    {
        str = va_arg(strings, char*); // Get the next string

        // If the string is NULL, print (nil) instead
        if (str == NULL)
        {
            printf("(nil)");
        }
        else
        {
            printf("%s", str);
        }

        // If separator isn't NULL and it's not the last string, print the separator
        if (separator != NULL && i != n - 1)
        {
            printf("%s", separator);
        }
    }

    printf("\n"); // Print new line at the end

    va_end(strings); // Clean up
}

