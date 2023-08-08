#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: char array, string
 * @c: char to search for
 * Description: return a null if char mot found
 * Return: Pointer to the first occurance of the character 'c'
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
