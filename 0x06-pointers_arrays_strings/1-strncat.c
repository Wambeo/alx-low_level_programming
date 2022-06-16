#include "main.h"

/**
 * _strncat - concatenates two strings, and use at
 *		most n bytes from src. src does not
 *		does not need to be null terminated.
 * @dest: pointer to dstination string
 * @src: pointer to source string
 * @n: number of bytes to be concatenated
 *
 * Return: value of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int length, j;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
