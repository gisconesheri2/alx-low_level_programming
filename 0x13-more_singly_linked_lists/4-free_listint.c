#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees the memory allocated in creating a singly linked list
 * @head: pointer to the first node
 */

void free_listint(listint_t *head)
{
	listint_t *current_node = head;
	int size = 0;
	int i;

	if (head == NULL)
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
		current_node = head;
		i = 0;
		while (i < size)
		{
			current_node = current_node->next;
			i++;
		}
		free(current_node);
	}

}
