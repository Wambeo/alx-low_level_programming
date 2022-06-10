#include "main.h"

/**
 * print_sign - gives the sign of a number
 *
 * @n: the parameter to be checked
 *
 * Return: 1 if n is greater than zero
 * then 0 if n is zero
 * and -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
