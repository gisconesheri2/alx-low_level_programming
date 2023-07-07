#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees malloc alocated memory and sets head to NULL
 * @head: pointer to the address of the first node
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node = *head;
	int size = 0;
	int i;

	if (*head == NULL)
		size = 0;
	else
	{
		while (current_node->next != NULL)
		{
			size++;
			current_node = current_node->next;
		}
	}
	for (; size >= 0; size--)
	{
		current_node = *head;
		i = 0;
		while (i < size)
		{
			current_node = current_node->next;
			i++;
		}
		free(current_node);
	}

	*head = NULL;
}
