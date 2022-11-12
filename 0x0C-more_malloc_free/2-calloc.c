#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: number of members in the array
 * @size: size of array in bytes
 *
 * Return: Pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	ptr = malloc(size * nmemb + 1);
	if (ptr == NULL || nmemb == 0 || size == 0)
		return (NULL);
	return (ptr);
}
