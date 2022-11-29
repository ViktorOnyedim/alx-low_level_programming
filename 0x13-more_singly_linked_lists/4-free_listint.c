#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 * @head: head pointer
 *
 * Return: Nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *current_node;
	listint_t *next;

	current_node = head;
	while (current_node != NULL)
	{
		next = current_node->next;
		if (current_node)
			free(current_node);
		current_node = next;
	}
}
