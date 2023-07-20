#include "main.h"

/**
 * print_last_digit - Entry point
 * Description: A program that prints tha last digit of a number
 * @x: int type number
 * Return: return value of the last digit (Success)
 */

int print_last_digit(int x)
{
	int y;

	if (x < 0)
	{
		y = -1 * (x % 10);
		_putchar(y + '0');
		return (y);
	}
	else
	{
		y = x % 10;
		_putchar(y + '0');

		return (y);
	}
}
