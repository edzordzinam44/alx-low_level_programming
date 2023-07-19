#include "main.h"

/**
 * _isalpha - Entry point
 * Description: A program that checks for alphabetic character
 * @c: type int character
 * Return: 0 (Success)
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
