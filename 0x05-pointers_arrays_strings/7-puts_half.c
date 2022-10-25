#include "main.h"
#include <stdio.h>
/**
 * puts_half - Prints half of a string
 * @str
 *
 * Return: void.
 */

void puts_half(char *str)
{
	int len, n;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	printf("%d\n", len);
	if (len % 2 == 0)
	{
		n = (len) / 2;
		while (n <= len - 1)
		{
			printf("%c\n", str[n]);
			n++;
		}
	}
}
