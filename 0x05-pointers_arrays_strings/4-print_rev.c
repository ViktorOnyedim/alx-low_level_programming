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

	for (count = 0; *s != '\0'; count++)
	{
		s++;
	}
	len = count;
	for (i = len; i >= 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
