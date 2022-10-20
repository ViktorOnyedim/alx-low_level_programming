#include "main.h"

/**
 * print_line - Draws a strainght line in the terminal
 * @n: Number of lines
 *
 * Return: void.
 */

void print_line(int n)
{
	int start;

	for (start = 0; start < n; start++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
