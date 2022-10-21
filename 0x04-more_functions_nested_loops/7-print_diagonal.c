#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: Length of line
 *
 * Return: void.
 */

void print_diagonal(int n)
{
	int start;
	int space;

	if (n > 0)
	{
		for (start = 0; start < n; start++)
		{
			for (space = 0; space < start; space ++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
