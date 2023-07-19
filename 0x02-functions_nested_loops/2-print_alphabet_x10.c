#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: Print 10 times a number in lowercase
 * Return: 0 (Success)
 */

void print_alphabet_x10(void)
{
	char c;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
