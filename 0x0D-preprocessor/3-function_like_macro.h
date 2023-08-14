#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

#include <stdio.h>

#define ABS(x) ((c) < 0 ? -(x) : (x))
/**
 * main - Write a function-like macro ABS(x)
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int num = -9;
	int abs_num = ABS(num);

	print("Absolute value of %d is %d\n", num, abs_num);

	return (0);
}
