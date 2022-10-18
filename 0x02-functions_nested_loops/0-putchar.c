#include "main.h"

/**
 * main -  Prints "_putchar"
 *
 * Return: 0 if program executes successfully
 */

int main(void)
{
	int x;
	char t_str[] = "_putchar";

	for (x = 0; x < 8; x++)
	{
		_putchar(t_str[x]);
	}
	_putchar('\n');
	return (0);
}
