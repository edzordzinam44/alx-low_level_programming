#include "main.h"

/**
 * _isupper - This function checks for uppercase characters only
 * @c: int type number
 * Description: if 1 is return an uppercase letter else
 * Return: 0 (Success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
