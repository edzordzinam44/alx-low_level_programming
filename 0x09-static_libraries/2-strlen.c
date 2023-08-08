#include "main.h"

/**
 * _strlen - return the length of string
 * @s: string to be evaluated
 * Description: make an count increment along the way
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
