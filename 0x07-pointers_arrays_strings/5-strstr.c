#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring
 *	needle in the string haystack. the terminating null byte
 *	are not compared
 *
 * @haystack: string to be checked
 * @needle: the substring that is to be checked for
 * Return: pointer to the beginning of the located substring
 *	NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
