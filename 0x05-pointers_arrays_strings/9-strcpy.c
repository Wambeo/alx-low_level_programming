#include "main.h"

/**
 * _strcpy - copies a string pointed to by @src, including the terminating null
 *		byte, to a buffer pointed to by @dest
 * @dest: the address to be coppied to
 * @src: the source to copy from
 *
 * Return: a pointer to the destination string @dest
 */

char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';

	return (dest);
}
