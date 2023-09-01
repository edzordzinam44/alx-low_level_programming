#include "main.h"

/**
 * _strpbrk - Entry point
 * Description: Search a string for any of a set of bytes
 * @s: string
 * @accept: string to match
 * Return: pointer to byte in 's' that matches one of the 'accept'
 * or 'null' if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}

	return (0);
}
