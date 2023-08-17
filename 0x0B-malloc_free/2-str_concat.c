#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string '1'
 * @s2: string '2'
 * Return: NULL on failure, a pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *b;
	int w, x, y, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (w = 0; s1[w] != '\0'; w++)
		;
	for (x = 0; s2[x] != '\0'; x++)
		;

	b = malloc((w * sizeof(*s1)) + (x * sizeof(*s2)) + 1);
	if (b == NULL)
		return (NULL);

	for (y = 0, z = 0; y < (w + x + 1); y++)
	{
		if (y < w)
			b[y] = s1[y];
		else
			b[y] = s2[z++];
	}

	return (b);
}
