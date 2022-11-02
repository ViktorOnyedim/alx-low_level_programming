#include "main.h"

/**
 * _puts_recursion - Prints a string recursively
 * @s: Input string
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
