#include <stdio.h>

/**
 * main - Entry Point
 * Description: Prints all possible combinations of two two-digit numbers
 * Return: 0 if program executes successfully
 */

int main(void)
{
	int i, j, k, l;
	
	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			putchar(32);
			
		}
	}
	return (0);
}
