#include "main.h"

/**
 * print_array - prints the elements of an array
 * @a: address to the array element
 * @n: number of elements of the array to be printed
 *
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
