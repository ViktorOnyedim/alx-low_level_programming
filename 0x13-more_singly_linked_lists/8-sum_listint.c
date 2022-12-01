#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns the sum of all the date (n) of a listint_t linked list
 * @head: head pointer
 *
 * Return: the sum of all the data (n) of a listint_t linked list
 * or 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;
	if (temp == NULL)
		return (0);
	
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
