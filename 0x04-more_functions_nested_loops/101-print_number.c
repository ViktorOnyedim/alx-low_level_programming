#include "main.h"

/**
 * print_number - Prints an integer
 * @n: integer
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int i, j, count;

	if (n < 0)
	{
		_putchar(45);
		i = n * (-1);
	}
	else
	{
		i = n;
	}

	count = 1;

	for (j = i; j > 9; j /= 10)
	{
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((i / count) % 10) + '0');
	}
}
