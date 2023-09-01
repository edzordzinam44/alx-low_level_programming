#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long int.
 * @n: The number to print in binary.
 */

void print_binary(unsigned long int n)
{
	int k, count;

	if (n == 0)
		_putchar('0');
	for (count = 0, k = sizeof(n) * 8 - 1; k >= 0; k--)
	{
		if ((n >> k) & 1)
			count = 1;
		if (count == 1)
			((n >> k) & 1) ? _putchar('1') : _putchar('0');
	}
}
