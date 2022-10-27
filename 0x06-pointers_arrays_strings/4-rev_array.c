#include "main.h"

/**
 * reverse_array - Reverses the contentl of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int *start, *end, temp, i;

	start = a;
	end = a;
	for (i = 0; i < n - 1; i++)
		end++;
	for (i = 0; i < n / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;
		start++;
		end--;
	}
}
