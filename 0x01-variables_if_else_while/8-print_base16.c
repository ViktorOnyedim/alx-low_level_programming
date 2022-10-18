#include <stdio.h>

/**
 * main - Print all the numbers of base 16 in lowercase
 *
 * Return: 0 if program executes successfully
 */

int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
		putchar(ch);
	for (ch = 97; ch <= 102; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
