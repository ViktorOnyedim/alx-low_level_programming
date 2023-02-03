#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_t *hash_table_create - Creates a hash table
 * @size: size of the array
 *
 * Return: A pointer to the newly created hash table
 * or NULL if something went wrong.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;
	unsigned long int i;

	if (size < 1)
		return (NULL);

	h_table = malloc(sizeof(hash_table_t));
	if (!h_table)
		return (NULL);

	h_table -> size = size;
	h_table -> array = malloc(sizeof(hash_node_t *) * size);
	if (!h_table -> array)
	{
		free(h_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		h_table -> array[i] = NULL
	return (h_table);
}
 
