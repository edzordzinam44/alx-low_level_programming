#include "main.h"

/**
 * _puts - print a string to stdout
 * @str: char array string type
 * Description: the function adds a newline to the output
 * Return: Successful
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
