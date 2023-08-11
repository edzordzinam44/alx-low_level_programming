#include "main.h"
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers
 * @max: maximum value
 * @min: minimum value
 *
 * Description: if malloc fails return NULL
 * And return NULL if min > max
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int range, i;
	int *s;

	range = 0;

	if (min > max)
		return (NULL);

	range = ((max + 1) - min);

	s = malloc(range * sizeof(int));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
	{
		*(s + i) = min + i;
	}

	return (s);
}
