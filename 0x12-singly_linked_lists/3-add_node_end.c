#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of list_t list
 * @head: head pointer
 * @str: string duplicate
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current_node;
	list_t *new_node;
	int i = 0;

	current_node = *head;
	while (current_node && current_node->next != NULL)
		current = current->next;

	while (str[i] != '\0')
		i++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	new_node->len = c;
	new_node-next = NULL;

	if (current_node)
		current_node->next = new_node;
	else
		*head = new_node;

	return (new_node);
}
