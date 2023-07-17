#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'c')
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n');
	return (0);
}
