#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - A function that prints strings followed by a new line
 * @n: Is the number of strings passed to the function
 * @separator: Is the string to be printed between the strings
 *
 * Description: If one of the string is NULL, print (nil) instead
 * If separator is NULL, don’t print it,print a new line
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	/* Declaring & initializing a va_list and storing in an arguments */
	va_list args;
	char *str;
	unsigned int j;

	va_start(args, n);

	/* Iterate through the list using a loop index j */
	for (j = 0; j < n; j++)
	{
		str = va_arg(args, char *);

		/* Prints a 'nil' if string is NULL / Prints a string */
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

	       /* When argument and separator is not NULL print separator*/
		if (j != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	/* cleanup the va_list */
	va_end(args);
}
