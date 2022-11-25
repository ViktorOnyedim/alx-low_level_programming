#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - Frees list_t list
 * @head: head pointer
 *
 * Return: Nothing.
 */

void free_list(list_t *head)
{
	list_t *current_node;
	list_t *next;

	current_node = head;
	while (current_node != NULL)
	{
		next = current_node->next
		free(current_node->str);
		free(current_node);
		current_node = next;
	}
}
