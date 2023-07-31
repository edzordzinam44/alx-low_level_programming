#include "main.h"

/**
 * _strchr - locate charcter in a string
 * @s: char array string
 * @c: char to look for
 * Decription: return null if char not found
 * Return: A pointer to the first occurence to the character 'c'
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
