#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * It does this by using a function to compare values in an array said integer
 * @array: array to compare to
 * @size: size of the array or number of values to compare out integer to
 * @cmp: function that does the comparing
 *
 * Return: returns -1 if something goes wrong. Otherwise returns the index of
 * the matching value
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || !size || size <= 0 || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
