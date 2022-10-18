#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 * Descriptioin: The two digits must be different
 * 01 and 10 are considered the same combnations of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * You can only use the putchar function
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: 0 if program executes successfully
 */

int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				if (i < 56)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
