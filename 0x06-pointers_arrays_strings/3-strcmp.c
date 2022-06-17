#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: negative if s1 is less than s2
 *	0 is they are equal
 *	positive is s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
