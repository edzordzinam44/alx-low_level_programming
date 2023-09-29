#include "main.h"

/**
 * power - Calculates the result of base raised to the power of exp.
 * @base: The base value.
 * @exp: The exponent value.
 * Return: The result of base raised to the power of exp.
 */
unsigned long int _power(unsigned int base, unsigned int exp)
{
	unsigned long int result;
	unsigned int j;

	result = 1;
	for (j = 0; j < exp; j++)
	{
		result *= base;
	}

	return (result);
}

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int result, divisor;
	char flag;

	flag = 0;
	divisor = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (divisor != 0)
	{
		result = n & divisor;
		if (result == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
