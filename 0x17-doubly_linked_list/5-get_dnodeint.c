#include <stdlib.h>
#include "lists.h"
/**
 * dll_len - print the contents of doubly linked list
 * @h: beginning node of the linked list
 * Return: length of the list
 */

size_t dll_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t len = 0;

	current = h;

	while (current != NULL)
	{
		current = current->next;
		len++;
	}
	return (len);
}
/**
 * get_dnodeint_at_index - get node at given index
 * @head: beginning of the double linked list
 * @index:pos to add the new node
 * Return: address of the node at index or NULL otherwise
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	size_t length, pos;

	current = head;
	pos = 0;
	length = dll_len(current);
	if (index > length - 1)
		return (NULL);

	while (pos != index)
	{
		current = current->next;
		pos++;
	}
	return (current);
}
