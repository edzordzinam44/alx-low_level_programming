#include "main.h"

/**
 * print_sign - Entry point
 * Description: A program that prints the sign of a number
 * @n: type int integer, can be positive or negative
 * Return: 1 if +, 0 if 0, -1 if - (Success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
