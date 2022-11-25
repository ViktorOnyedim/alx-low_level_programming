#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: head pointer
 *
 * Return: Number of elements in the linked list_t list.
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t nelem = 0;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		nelem++;
	}
	return (nelem);
}
