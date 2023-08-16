#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - A function that executes a function given as a parameter
 * @action: the function used by the pointer
 * @size: the array size
 * @array: an array to iterate over
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (!array || !action)
		return;

	for (j = 0; j < size; j++)
		action(array[j]);
}
