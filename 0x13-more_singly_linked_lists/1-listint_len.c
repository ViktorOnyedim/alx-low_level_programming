#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: head pointer
 *
 * Return: number of elements in the linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
