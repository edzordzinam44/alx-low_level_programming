#include "main.h"

/**
 * print_alphabet - Entry point 
 * Description: Prints alpahbets in lowecase only
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}