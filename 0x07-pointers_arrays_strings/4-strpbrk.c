#include "main.h"

/**
 * _strpbrk - locates the first occurence in the string @s of
 *	any of the bytes in the string accept
 *
 * @s: the string to be checked
 * @accept: the string where its bytes will be checked in string @s
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 *	NULL if no such bytes is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
