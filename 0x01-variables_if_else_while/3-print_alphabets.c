#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0 if program executes successfully
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
