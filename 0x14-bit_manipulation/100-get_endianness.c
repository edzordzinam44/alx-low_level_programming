#include "main.h"

/**
 * get_endianness - Checking for endianness
 *
 * Return: 0 if big endian, or if little endiann
 */

int get_endianness(void)
{
	int fig;

	fig = 1;
	if (*(char *)&fig == 1)
	{
		return (1);
	}

	return (0);
}
