#include "main.h"

/**
 * _strncpy - copies string from src for only n bytes
 *
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: the bytes to be copied
 *
 * Return: the value of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
