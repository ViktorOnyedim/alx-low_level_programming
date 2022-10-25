#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: array of numbers
 * @n: Number of elememts of array to be printed
 *
 * Return: void.
 */

void print_array(int *a, int n)
{
	int count;

	
	/*while (a[len] != '\0')
	{
		len++;
	}*/
	count = 0;
	while (count < n)
	{
		printf("%d", a[count]);
		if (count < n - 1)
		{
			printf(", ");
		}
		count++;
	}
	printf("\n");
}
