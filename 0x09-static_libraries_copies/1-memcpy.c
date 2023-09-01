#include "main.h"

/**
 * _memcpy - copy's the memory area
 * @n: number of elements to copy
 * @src: char array to be copied from
 * @dest: char array to be copied into
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}

	return (dest);
}
