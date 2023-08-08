#include "main.h"

/**
 * _memset - Function that fills with a constant byte
 * @n: number of bytes the memory area can fill
 * @s: buffer array
 * @b: constant byte
 * Decription: fill first the 'n' byte of the memory area pointed by 's'
 * Return: pointer to memory area 's'
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
