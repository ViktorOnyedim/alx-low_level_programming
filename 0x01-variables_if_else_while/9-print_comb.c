#include <stdio.h>

/**
 * main - main function block
 * Description: Prints all possible combinations of single-digit numbers
 * Numbers must be seperated by "," followed by a space
 * Numbers should be printed in ascending order
 * You are only allowed to use the "putchar" function
 * You can only use "putchar" four times maximum in your code
 * You are not alowed to use any variable of type "char"
 * Return: 0 if the program executes successfully
 */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
