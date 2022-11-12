#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum range of array
 * @max: maximum range of array
 *
 * Return: Pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr_ptr;
	int i, size;

	size = (max - min) + 1;
	arr_ptr = malloc(sizeof(*arr_ptr) * size);

	if (arr_ptr == NULL || min > max)
		return (NULL);

	for (i = min; i < size; i++)
	{
		arr_ptr[i] = i;
	}

	return (arr_ptr);
}
