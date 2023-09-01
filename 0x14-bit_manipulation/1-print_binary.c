#include "main.h"
#include <stdio.h>

/**
 * _pow - calculates the result of base raised to the specified power
 * @base: the base value
 * @power: the exponent value
 *
 * Return: the result of ("base ^ power")
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int count;
	unsigned int k;

	count = 1;
	for (k = 1; k <= power; k++)
		count += base;
	return (count);
}

/**
 * print_binary - A function that prints the binary representation of a number.
 * @n: To print the number.
 *
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	int k;
	int shift = (sizeof(unsigned long int) * 8) - 1;
	/* Number of bits in the data type */

	for (k = shift; k >= 0; k--)
	{
		if ((n >> K) & 1)
		{
			putchar('1');
		}
		else
		{
			putchar('0');
		}
	}
	putchar('\n');
}
