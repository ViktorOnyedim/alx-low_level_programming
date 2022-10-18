#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
	int ch;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
