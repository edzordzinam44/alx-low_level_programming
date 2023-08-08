#include "main.h"

/**
 * _isalpha - Main point
 * @c: int type, character
 * Description: A program that checks for alphabetic character
 * Return: 0 (Successful)
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
