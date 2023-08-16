#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - A function that prints a name
 * @f: pointer in the printing function
 * @name: name to be printed
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	(*f)(name);
}
