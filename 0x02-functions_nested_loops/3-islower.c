#include "main.h"

/**
 * _islower - Entry point
 * Description: A program that checks a lowercase character
 * @c: char type letter
 * Return: 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
