#include "main.h"

/**
 * _pow_recursion - gives the value of @x raised to the power of @y
 *
 * @x: the base number to be raised
 * @y: the power to be raised
 *
 * Return: the value of the raised number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
