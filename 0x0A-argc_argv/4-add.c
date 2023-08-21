#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculate and print the sum of positive numbers.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of argument strings.
 *
 * Return: 1 if non-digit symbols found in numbers, otherwise 0.
 */

int main(int argc, char *argv[])
{ /* Program entry point for handling command-line arguments */
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
