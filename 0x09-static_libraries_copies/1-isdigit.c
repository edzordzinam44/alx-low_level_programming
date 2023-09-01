#include "main.h"

/**
 * _isdigit - this checks for digits 0 to 9
 * @c: imt type parameter
 * Return: 1 if didgit else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
