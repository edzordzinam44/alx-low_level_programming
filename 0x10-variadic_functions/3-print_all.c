#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything.
 * @format: is a list of types of arguments passed to the function
 * Description: You can use a maximum of 9 variables
 * Return: void
 */

void print_all(const char * const format, ...)
{
	/* Declaring and initialization */
	unsigned int j;
	va_list argm;
	char *s, *separator;

	va_start(argm, format);

	separator = "";

	j = 0;
	/* Iterate through loop in the 'format' string */
	while (format && format[j])
	{
		switch (format[j])
		{
			case 'c':
				printf("%s%c", separator, va_arg(argm, int));
				break;
			case 'j':
				printf("%s%d", separator, va_arg(argm, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(argm, double));
				break;
			case 's':
				s = va_arg(argm, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				j++;
				continue;
		}
		separator = ", ";
		j++;
	}

	printf("\n");
	va_end(argm);
}
