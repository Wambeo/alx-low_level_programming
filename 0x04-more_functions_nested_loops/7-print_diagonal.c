#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the \ should be printed
 */
void print_diagonal(int n)
{
	int l, space;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (space = 0; space < l; space++)
				_putchar(' ');
			_putchar('\\');

			if (l == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
