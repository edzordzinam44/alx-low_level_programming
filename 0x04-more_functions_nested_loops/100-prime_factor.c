#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Description: Fund and print the largest prime factor of the number
 * Return: 0 (Success)
 */

int main(void)
{
	long num = 612852475143;
	long c;

	while (num % 2 == 0)
	{
		num = num / 2;
	}

	for (c = 3; c <= sqrt(num); c = c + 2)
	{
		while (num % c == 0)
		{
			num = num / c;
		}
	}

	if (num > 2)
	{
		printf("%ld\n", num);
	}

	return (0);
}
