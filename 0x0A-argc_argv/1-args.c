#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 * @argc: argument count
 * @argv: Array of arguments
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	UNUSED_PARAMETER(**argv);

	printf("%d\n", argc - 1);

	return (0);
}
