#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
{
	int d = 0;

	while (d < 10)
	{
		putchar(d + '0');
		d++;
	}

	putchar('\n');

	return (0);
}
