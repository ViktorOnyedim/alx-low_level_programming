#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head pointer
 *
 * Return: head node's data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return (0);
	}

	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (temp->n);
}
