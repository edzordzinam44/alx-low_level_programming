#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: (Success)
 */

void print_number(int n)
{
	long int n1;

	if (n < 0)
	{
		n1 = -(long int)n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}

	if (n1 / 10)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 100) + '0');
}
