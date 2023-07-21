#include "main.h"

/**
 * print_square - print a square
 * @size: size of square
 * Description: Use the character '#' to print the square
 * Return: (void)
 */

void print_square(int size)
{
	int x, y;

	if (size < 1)
		return;
	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
