#include <stdio.h>

/**
 * main - print all possible combination of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
		if (i < 9)
		putchar(',');
		if (i < 9)
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
