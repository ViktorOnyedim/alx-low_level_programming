#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 * Descriptioin: Numbers must be seperated by "," followed by a space
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered
 * the same combnations of the two digits 0, 1 and 2
 * Print only the smallest combination of two digits
 * You can only use the putchar function
 * You can only use putchar six times in ascending order, with three digits
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: 0 if program executes successfully
 */

int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				if (i != j && j != k && i != k)
				{
					if (i < j && j < k)
					{
						putchar(i);
						putchar(j);
						putchar(k);
						if (i < 55)
						{
							putchar(44);
							putchar(32);
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
