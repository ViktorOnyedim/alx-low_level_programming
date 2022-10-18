#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 if program executes successfully
 */

int main(void)
{
	int n;
	int base = 10;

	for (n = 0; n < base; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
