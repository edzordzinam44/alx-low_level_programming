#include "main.h"

/**
 * flip_bits - Counts the number of differing bits between two numbers.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The count of differing bits between n and m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differ;
	unsigned int bit_count, j;

	j = 0;
	differ = n ^ m;
	bit_count = 0;
	for (j = 0; j < (sizeof(unsigned long int) * 8); j++)
	{
		/* Check if the current bit in the difference is set */
		if (differ & (1UL << j))
			bit_count++;
	}

	return (bit_count);
}
