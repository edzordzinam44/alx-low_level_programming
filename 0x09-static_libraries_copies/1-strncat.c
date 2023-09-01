#include "main.h"

/**
 * _strncat - concatenate two string
 * @src: source string
 * @dest: destination string
 * @n: number of elements to concatenate rather than null
 * Return: pointer to resulting 'dest'
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int c;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (c = 0; src[c] != '\0' && n > 0; c++, n--, i++)
	{
		dest[i] = src[c];
	}
	return (dest);
}
