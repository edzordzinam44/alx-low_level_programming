#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A  function returns a pointer to the duplicated string
 * @str: The duplicated string
 * Return: returns a pointer to a new string
 */

char *_strdup(char *str)
{
	char *b;
	int c, j;

	if (str == NULL)
		return (NULL);

	for (c = 0; str[c] != '\0'; c++)
		;

	b = malloc(c * sizeof(*b) + 1);
	if (b == NULL)
		return (NULL);

	for (j = 0; j < c; j++)
		b[j] = str[j];
	b[j] = '\0';

	return (b);
}
