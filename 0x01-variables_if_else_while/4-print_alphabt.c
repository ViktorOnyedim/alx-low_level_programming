#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Description - Prints the alphabet in lowercase with exception of q and e
 *
 * Return: 0 if the program executes successfully
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
