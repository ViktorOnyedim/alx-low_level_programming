#include <stdio.h>

/**
 * main - Multiplies two numbers
 * @argc: count of arguments
 * @argv: Array of arguments
 *
 *
 * Return: 1 if program does not receive 2 arguments, otherwise, 0.
 */

int main(int argc, char **argv)
{
	int *mul, count;

	if (argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	for (count = 1; count < argc; count++)
	{
		mul *= argv[count];
	}
	printf("%d\n", mul);
	return (0);
}
