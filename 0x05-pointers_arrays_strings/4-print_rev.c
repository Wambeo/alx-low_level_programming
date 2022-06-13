#include "main.h"

/**
 * _strlen - returns length of a string
 *
 * @s: - string to be checked
 *
 * Return: the length of @s
 */

size_t _strlen(const char *s)
{
	size_t len = 0;

	while (*s++)
		len++;

	return (len);
}
/**
 * print_rev - prints a string in reverse
 * @s: string s
 */
void print_rev(char *s)
{
	int size = _strlen(s);

	while (size--)
		_putchar(*(s + size));

	_putchar('\n');
}
