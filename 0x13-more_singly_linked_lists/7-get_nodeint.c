#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the node at the given index
 * @head: pointer to the first node in the linked list
 * @index: index of the node starting from 0
 * Return: pointer to the node at given index, NULL if Index does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int pos = 0;
	unsigned int size = 0;
	listint_t *node_at_index = head;
	listint_t *current_node = head;

	if (head == NULL)
		return (NULL);

	while (current_node->next != NULL)
	{
		current_node = current_node->next;
		size++;
	}
	if (index > size)
		return (NULL);

	while (pos != index)
	{
		node_at_index = node_at_index->next;
		pos++;
	}
	return (node_at_index);
}
