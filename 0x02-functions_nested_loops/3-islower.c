#include "main.h"

/**
 * _islower - checks if the character is lowercase
 *
 *@c: parameter of type integer
 * Return: 1 if charcter is lowercase
 * and 0 if uppercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
