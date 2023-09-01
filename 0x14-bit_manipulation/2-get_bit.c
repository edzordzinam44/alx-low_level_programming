#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The input unsigned long integer.
 * @index: The index of the bit to retrieve (0-based index).
 *
 * Return: The value of the bit at the specified index or -1 if an error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
}
