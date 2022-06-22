#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - finds the natural square root of a number
 *
 * @num: the number to find the square root of
 * @root: the root to be tested
 *
 * Return: the square root if number as a nutural square root
 *	-1 if the number doest have a natural square root
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to be check its squar root
 *
 * Return: the natural square root of  n  if it has a natural number
 *	-1 if n doesnt have a natural number
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
