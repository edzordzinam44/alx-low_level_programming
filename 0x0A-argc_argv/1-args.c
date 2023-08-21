#include <stdio.h>

/**
 * main - Print the count of arguments.
 * @argc: Number of program arguments.
 * @argv: Array of argument strings.
 *
 * Return: 0.
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{ /* Program entry point with unused argv and argument count */
	printf("%d\n", argc - 1);

	return (0);
}
