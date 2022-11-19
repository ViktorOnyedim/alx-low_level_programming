#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: pointer to array
 * @size: number of elements in the array "array"
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of first element for which cmp function does not return 0
 * if no element matches or if size <= 0, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i] != 0)
				return (i);
		}
	}
	return (-1);
}
