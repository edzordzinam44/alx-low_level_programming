#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the product of two numbers.
 * @argc: Number of program arguments.
 * @argv: Array of argument strings.
 *
 * Return: 0 if two arguments are received, otherwise 1.
 */

int main(int argc, char *argv[])
{ /* Entry point of the program receiving command-line arguments */
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
