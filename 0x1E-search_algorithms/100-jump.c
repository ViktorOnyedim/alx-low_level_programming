#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump search algorithm.
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elementsin array
 * @value: Value to search for
 *
 * Return first index where value is located,
 * -> (-1) if value is not present or if array is Null.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, j, prev;
	int step;

	step = sqrt(size);
	i = 0;

	while (i < size)
	{
		prev = i;
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		else if (array[i] > value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", prev, i);
			for (j = prev; j < i; j++)
			{
				printf("Value checked array[%ld] = [%d]\n", j, array[j]);
				if (array[j] == value)
				{
					return (j);
				}
			}
			return (-1);
		}

		i = i + step;
	}

	prev = i - step;
	printf("Value found between indexes [%ld] and [%ld]\n", prev, i);
	for (j = prev; j < size; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
	return (-1);
}
