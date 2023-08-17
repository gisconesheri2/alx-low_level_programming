#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees mallloc created nodes of a doubly linked list
 * @head: beginning node of the linked list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *p;

	current = p = head;

	while (current != NULL)
	{
		current = p->next;
		free(p);
		p = current;
	}
}
