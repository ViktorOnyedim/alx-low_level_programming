#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocated memory using malloc
 * @b: param
 *
 * Return: Nothing.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
