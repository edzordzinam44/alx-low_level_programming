#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 * Description: Produce same as output
 * Return 0 (Success)
 */
int main(void);
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
printf("Size of a char: %ld byte(s)\n", (unsigned long)sizeof(a));
printf("Sive of an integer: %ld byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int:%ld byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %ld byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
