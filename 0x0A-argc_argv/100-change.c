#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculate minimum coins for making change.
 * @argc: Number of program arguments.
 * @argv: Array of argument strings.
 *
 * Return: 1 if arguments are not exactly one, else 0.
 */
int main(int argc, char *argv[])
{ /* Program entry for calculating minimum coins for change */
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}

	printf("%d\n", coins);

	return (0);
}
