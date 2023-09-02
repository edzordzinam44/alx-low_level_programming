#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the unsigned long integer to modify.
 * @index: The index of the bit to set (0-based index).
 *
 * Return: 1 if the bit was successfully set, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		/* Error: Index out of range */
		return (-1);
	}

	*n = *n | (1 << index);
	return (1);
}
