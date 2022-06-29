#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *		intergers with each element initialized to 0
 *
 * @width: the width of the array
 * @height: te height of the array
 *
 * Return: NULL if width is less or equal to 0
 *		and if height is less or equal to 0
 *		the function fails
 *	else a pointer to the 2-dimensonal array of integers
 *
 */

int **alloc_grid(int width, int height)
{
	int **d;
	int h, w;

	if (width <= 0 || height <= 0)
		return (NULL);

	d = malloc(sizeof(int *) * height);

	if (d == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		d[h] = malloc(sizeof(int) * width);

		if (d[h] == NULL)
		{
			for (; h >= 0; h--)
				free(d[h]);

			free(d);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			d[h][w] = 0;
	}

	return (d);
}
