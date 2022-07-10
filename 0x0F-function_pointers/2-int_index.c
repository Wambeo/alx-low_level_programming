#include "function_pointers.h"

/**
 * int_index - searches for a integer in and array of intergers
 *
 * @array: The array of integers
 * @size: size of array
 * @cmp: pointer to function to be used to compare values.
 *
 * Return: -1 if no element matches or size is less than 0.
 *	else the index of the first element for which the
 *	cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
