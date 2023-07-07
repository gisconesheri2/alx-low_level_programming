#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * print_listint - list the data inside a singly linked list
 * @h: pointer to the head of te linked list
 * Return: number of nodes in the linked list
 */

size_t print_listint(const listint_t *h)
{
	listint_t new_list = {0, NULL};
	listint_t *new_list_p = &new_list;
	unsigned int num_of_elements;

	num_of_elements  = 0;
	if (h == NULL)
		return (0);

	new_list_p->n = h->n;
	new_list_p->next = h->next;

	while (new_list_p != NULL)
	{
		printf("%d\n", new_list_p->n);
		num_of_elements++;
		new_list_p = new_list_p->next;
	}

	return (num_of_elements);
}
