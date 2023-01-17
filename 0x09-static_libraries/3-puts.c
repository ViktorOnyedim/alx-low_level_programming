#include "main.h"

/**
 * _puts - Prints a string
 * @str: String to be printed
 *
 * Return: void.
 */

void _puts(char *str)
{
	int count;

	for (count = 0; *str != '\0'; count++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
