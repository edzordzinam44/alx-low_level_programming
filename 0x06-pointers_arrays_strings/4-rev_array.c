#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: array of integers
 * @n: number of elements in the array
 * Return: Success
 */

void reverse_array(int *a, int n)
{
	int i, h;

	for (i = 0; i < (n / 2); i++)
	{
		h = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = h;
	}
}
