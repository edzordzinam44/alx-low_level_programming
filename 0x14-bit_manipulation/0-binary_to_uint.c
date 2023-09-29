#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: A pointer to a string containing '0' and '1' characters.
 *
 * Return: The converted unsigned integer, or 0 if an error occurs.
 */

unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int h;

	h = 0;
	if (!b)
		return (0);
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
	}
	for (j = 0; b[j] != '\0'; j++)
	{
		h <<= 1;
		if (b[j] == '1')
			h += 1;
	}
	return (h);
}
