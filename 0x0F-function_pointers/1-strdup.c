#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate the string using a malloc
 * @str: string to be duplicated
 * Return: function returns a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *s;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	s = malloc(i * sizeof(*s) + 1);
	if (s == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		s[j] = str[j];
	s[j] = '\0';

	return (s);
}
