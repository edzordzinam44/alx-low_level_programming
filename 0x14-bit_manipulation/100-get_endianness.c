#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if the system is big-endian, 1 if it is little-endian.
 */
int get_endianness(void)
{
	int test_value = 1;
	char *byte_pointer = (char *)&test_value;

	/* Check the least significant byte to determine the endianness */
	if (*byte_pointer == 1)
	{
		return (1);
	}

	return (0);
}
