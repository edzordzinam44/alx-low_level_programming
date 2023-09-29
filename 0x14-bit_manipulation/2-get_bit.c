#include "main.h"

/**
 * get_bit - Returns the value of the bit at a given index.
 * @n: The number to check bits in.
 * @index: The index of the bit to retrieve (0-based).
 *
 * Return: The value of the bit at the specified index
 * Or -1 if index is out of range.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, result;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	/* Create a divisor with the bit at an index set to 1 */
	divisor = 1 << index;
	result = n & divisor;

	if (result == divisor)
		return (1);
	/* The bit at the index is 1 */

	return (0);
}
