#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 *
 * @n: number to be checked.
 *
 * Return: 1 if n > 0, 0 if n is 0, and -1 if n is < 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
