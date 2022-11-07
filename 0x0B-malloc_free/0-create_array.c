#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: size of array
 * @c: character
 *
 * Return: pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL || size == 0)
	{

		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	return (ptr);
}
