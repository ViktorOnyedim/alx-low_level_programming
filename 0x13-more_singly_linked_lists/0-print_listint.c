#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head pointer
 *
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t node_count = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		node_count++;
	}

	return (node_count);
}
