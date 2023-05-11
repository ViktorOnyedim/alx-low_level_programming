#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers using
 * Binary search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located,
 * (-1) if value is not present or array is Null
 */

int binary_search(int *array, size_t size, int value)
{
	int left, right, mid;

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = (left + right) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
		} 
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
	}
	return (-1);
}
