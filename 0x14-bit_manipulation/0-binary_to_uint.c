#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - A function that converts a binary number to an unsigned int
 * @b: Is pointing to a string of 0 and 1 characters.
 *
 * Return: The final "result" as the converted unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		/* Invalid character found, return 0 */
		if (*b != '0' && *b != '1')
			return (0);
		result = (result << 1) | (*b - '0');
		b++;
	}

	return (result);
}
