#include "main.h"

/**
 * _islower - Main point
 * @c: char type
 * Description: This program checks for a lowercase character
 * Return: 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
