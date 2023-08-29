#include "main.h"

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: Char array string.
 * Return: 1 if palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	/* Function implementation */
	int string_length(char *s);
	int is_palindrome_recursive(char *start, char *end);
	int length = string_length(s);

	return (is_palindrome_recursive(s, s + length - 1));
}

/**
 * string_length - Calculate the length of a string.
 * @s: String.
 * Return: Length of the string.
 */

int string_length(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + string_length(s + 1));
}

/**
 * is_palindrome_recursive - Check if a string is a palindrome using recursion.
 * @start: Start of the string.
 * @end: End of the string.
 * Return: 1 if palindrome, 0 if not.
 */

int is_palindrome_recursive(char *start, char *end)
{
	if (start >= end)
		return (1);

	if (*start != *end)
		return (0);

	return (is_palindrome_recursive(start + 1, end - 1));
}
