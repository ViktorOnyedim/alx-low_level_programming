#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: count of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);

	return (0);
}
