#include "main.h"

/**
 * _memset - A functions that fills with a constant byte
 * @s: buffer array
 * @b: constant byte
 * @n: number of bytes of the memory area to fill
 * Description: Fill the first 'n' byte of the memory area pointed by 's'
 * with a constant byte 'b'
 * Return: A pointer to the memory area of 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		s[count] = b;
		count++;
	}

	return (s);
}
