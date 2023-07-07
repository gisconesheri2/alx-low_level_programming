#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index -  'deletes' the node at the index in a linked list
 * @head: pointer to the address of the first node
 * @index: position where to delete the node
 * Return: 1 if deletion successful, -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_node;
	listint_t *current_node = *head;
	unsigned int size = 0;
	unsigned int pos = 0;

	if (*head == NULL)
		return (-1);

	while (current_node->next != NULL)
	{
		size++;
		current_node = current_node->next;
	}

	if (index > size)
		return (-1);

	current_node = *head;
	while (pos != index - 1 && index > 0)
	{
		current_node = current_node->next;
		pos++;
	}
	if (index == 0)
	{
		temp_node = current_node->next;
		*head = temp_node;
		free(current_node);
		return (1);
	}

	temp_node = current_node->next;

	current_node->next = temp_node->next;

	free(temp_node);

	return (1);
}
