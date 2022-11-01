#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of two diagonals of a 
 * @a: Input array
 * @size: size of array
 *
 * Return: void.
 */

void print_diagsums(int *a, int size)
{
	int row, i;
	int principal = 0;
	int secondary = 0;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		principal += a[i];
	}
	for (row = 0; row < size; row++)
	{
		i = (row * size) - row;
		secondary += a[i];
	}
	printf("%d, %d\n", principal, secondary);
}
