#include "main.h"
#include <stdlib.h>

/**
 * _strstr - Main point
 * Description: locate a substring
 * @haystack: a string
 * @needle: a substring string
 * Return: pointer to the beginning of a substring or NULL if no found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int c;

	i = 0;
	c = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j + c] != '\0' && haystack[i + c] !=
				'\0' && needle[j + c] == haystack[i + c])
		{
			if (haystack[i + c] != needle[j + c])
				break;
			c++;
		}
			if (needle[j + c] == '\0')
				return (&haystack[i]);
			i++;
			j++;
		}

		return (NULL);
}
