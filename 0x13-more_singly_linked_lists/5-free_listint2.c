#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list and sets "head" to "NULL"
 * @head: pointer to head pointer
 *
 * Return: Nothing.
 */

 void free_listint2(listint_t **head)
{
	listint_t *current_node;
	listint_t *next;

	current_node = *head;
	while (current_node)
	{
		next = current_node->next;
		free(current_node);
		current_node = next;
	}
	*head = NULL;
}
