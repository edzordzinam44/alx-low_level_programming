#include "main.h"
#include <stdlib.h>

/**
 * _calloc - A function that allocates a memory of an array using malloc
 * @nmemb: number of elements in array
 * @size: size of each byte
 * Description: return null if malloc fails
 * Return: NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(s) + i) = 0;
	}

	return (s);
}
