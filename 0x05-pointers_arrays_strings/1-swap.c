#include"main.h"

/**
 * swap_int - switches the values of two integers
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int z = *a;

	*a = *b;
	*b = z;
}
