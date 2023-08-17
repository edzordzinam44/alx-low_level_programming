#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - A function that prints numbers followed by a new line
 * @n: Functions as number of integers passed to the function
 * @separator: the string to be printed between numbers
 * Description: If the separator tends to be NULL dont print
 * Return: 0 (Success)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* Declaring a variable list to stire the arguments */
	va_list argms;
	unsigned int j;

	/* Initializing the 'va_list' with a variable argument */
	va_start(argms, n);

	/* loop through all arguments */
	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(argms, unsigned int));
		/* If the argument and separator is not NULL print separator */
		if (j < (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	/* Use 'va_end'  macro to cleanup 'argms' */
	va_end(argms);

	printf("\n");
}
