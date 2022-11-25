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
	free(head->str);
	free(head);
}
