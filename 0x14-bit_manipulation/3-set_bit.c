#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the number in which to set the bit.
 * @index: The index (0-based) of the bit you want to set.
 *
 * Return: 1 if the operation was successful, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mask = 1 << index;
	/* Create a mask woth the bit at an index set to 1 */
	*n = *n | mask;
	/* Perform a bitwise OR operation to set bit to 1 */

	return (1);
}
