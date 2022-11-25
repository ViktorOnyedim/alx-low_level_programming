#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to head of list
 *
 * Return: Nothing.
 */

size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t node_count = 0;

	temp = h;
	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
		node_count++;
	}
	return (node_count);
}
