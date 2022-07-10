#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: The naem to be printed
 * @f: Pointer to a function that prints a name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
