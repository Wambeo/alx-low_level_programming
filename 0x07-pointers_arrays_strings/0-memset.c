#include "main.h"

/**
 * _memset - fills the first n bytes of the memory
 *		area pointed to by s with the constant b
 *
 * @s: pointer to memory location
 * @b: the constant to be filled in the memory
 * @n: the number of bytes of the memory area pointed to by s
 *
 * Return: a pointer to the memmory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
