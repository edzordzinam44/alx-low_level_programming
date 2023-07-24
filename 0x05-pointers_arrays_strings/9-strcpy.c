#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src
 * @dest: pointer to the buffer to which we copy string
 * @src: string to be copied
 * Decription: Include the terminating null byte (\0)
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] =  src[i];
	}
	dest[i] = '\0';

	return (dest);
}
