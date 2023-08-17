#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A function that returns the sum of all its parameters
 * @n: the number of arguments to use
 * Return: 0 (Success)
 */

int sum_them_all(const unsigned int n, ...)
{
	/* Declaring a variable "sum" to store sum of number */
	va_list args;
	unsigned int j;
	int sum;

	/* Checks if the number of arguments is zero */
	if (n == 0)
		return (0);
	sum = 0;

	/* initializing va-list for the number of arguments */
	va_start(args, n);

	/* Iterate through the list using a loop index of 'j' */
	for (j = 0; j < n; j++)
	{
		sum += va_arg(args, int);
	}

	/* Use 'va_end' macro to cleanup 'args' list */
	va_end(args);

	return (sum);
}
