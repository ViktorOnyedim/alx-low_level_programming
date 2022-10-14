#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 if program executed succefully
 */

int main(void)
{
	int n;
	int base_ascii = 57;

	for (n = 48; n <= base_ascii; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
