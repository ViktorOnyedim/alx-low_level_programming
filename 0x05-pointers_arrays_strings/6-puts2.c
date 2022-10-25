#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: param
 *
 * Return: void.
 */

void puts2(char *str)
{
	int len, j;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	for (j = 0; j < len - 1; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
