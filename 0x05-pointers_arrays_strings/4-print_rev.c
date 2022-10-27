#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: Pointer to string to be printed
 *
 * Return: void.
 */

void print_rev(char *s)
{
	int count, len, i, temp;
	char *start, *end;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	len = count;
	/*
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	*/
	start = s;
	end = s;
	for (i = 0; i < len - 1; i++)
		end++;

	for (i = 0; i < len / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;
		start++;
		end--;
		_putchar(start);
	}
	_putchar('\n');
}
