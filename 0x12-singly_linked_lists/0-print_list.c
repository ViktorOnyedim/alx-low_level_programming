#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to head of list
 *
 * Return: Nothing.
 */

/** struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;


size_t print_list(const list_t *h)
{
	list_t current_node;

	current_node = h;
	while (current_node != NULL)
	{
		printf("%d\n", current_node);
		current_node = current_node -> next;
	}
}
