#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: the string to be checked
 * @c: the character to be checked
 *
 * Return: pointer to the first character c in the string s
 *	NULL if the character is not found
 *
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
