#include "main.h"

/**
 * wildcmp - Compares two strings with support for '*' wildcard character.
 * @s1: The first string.
 * @s2: The second string with optional '*' wildcard.
 *
 * Return: 1 if the strings match, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0); /* If s2 contains '*', but s1 is empty */

	if (*s1 == '\0' && *s2 == '\0')
		return (1); /* Both strings are empty, successful match */

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1)); /* Continue comparing rest of strings */

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (0); /* Characters don't match */
}
