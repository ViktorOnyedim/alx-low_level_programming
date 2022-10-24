#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: Pointer to string to be printed
 *
 * Return: void.
 */

void print_rev(char *s)
{
	int count, len, i;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	len = count;
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
