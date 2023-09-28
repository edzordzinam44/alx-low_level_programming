#include "main.h"

/**
 * _power - calculate the result of raising a base to a power.
 * @base: the base value.
 * @pow: the power value.
 * Return: the result of base raised to the power.
 */

unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int num;
	unsigned int j;

	while (j <= pow)
	{
		num *= base;
		j++;
	}

	return (num);
}
/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 *
 * Return: (void)
 */
void print_binary(unsigned long int n)
{
	unsigned long int dev, result;
	char flag;

	flag = 0;
	dev = _power(2, sizeof(unsigned long int) * 8 - 1);

	for (; dev != 0; dev >>= 1)
	{
		result = n & dev;
		if (result == dev)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || dev == 1)
		{
			_putchar(0);
		}
		dev >>= 1;
	}
}
