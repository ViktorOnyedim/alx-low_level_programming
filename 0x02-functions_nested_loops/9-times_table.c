#include "main.h"
#include <stdio.h>
/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Return: void.
 */
void times_table(void)
{
	int i, j, num, range;

	range = 57;
	for (i = 48; i <= range; i++)
	{
		for (j = 48; j <= range; j++)
		{
			num = i * j;
			_putchar(num + '0');
			_putchar(' '); 
		}
		_putchar('\n');
	}
}
