#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * add_nodeint_end - adds a node at the end of alinked list
 * @head: pointer to the address of the first node in the list
 * @n: interger to the add to the new node
 * Return: pointer the newly created node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node_end;
	listint_t *last_node;

	new_node_end = malloc(sizeof(listint_t));
	if (new_node_end == NULL)
		return (NULL);

	new_node_end->n = n;
	new_node_end->next = NULL;

	if (*head == NULL)
		*head = new_node_end;

	else
	{
		last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node_end;
	}

	return (new_node_end);
}
