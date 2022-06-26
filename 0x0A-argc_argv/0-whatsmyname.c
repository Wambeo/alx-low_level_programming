#include "main.h"

/**
 * main - print the name of the program
 *
 * @argc: The number argument in the program
 * @argv: The values of the arguments
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
