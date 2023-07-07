#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * insert_nodeint_at_index - insert a new node at given index
 * @head: pointer to the address of the first element
 * @idx: index at which to place the new node
 * @n: data for the new node
 * Return: pointer to the new node, NULL if new node could not be created
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *last_node = *head;
	listint_t  *current_node = *head;
	listint_t *new_node, *temp_node;
	unsigned int size = 0;
	unsigned int pos = 0;

	if (last_node == NULL && idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (last_node->next != NULL)
	{
		size++;
		last_node = last_node->next;
	}
	if (idx > size + 1)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	while (pos != idx - 1 && idx > 0)
	{
		current_node = current_node->next;
		pos++;
	}
	if (idx == 0)
	{
		new_node->next = (*head);
		*head = new_node;
		return (new_node);
	}
	else
	{
		temp_node = current_node->next;
		current_node->next = new_node;
		new_node->next = temp_node;
	}
	return (new_node);
}
