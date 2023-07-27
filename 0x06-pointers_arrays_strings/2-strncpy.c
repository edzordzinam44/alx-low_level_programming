#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: string
 * @src: string
 * @n: number of elements to copy
 * Return: edited string 'dest'
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
