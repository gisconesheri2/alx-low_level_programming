#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

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
 * insert_dnodeint_at_index - insert new node at given index
 * @h: beginning of the double linked list
 * @idx:pos to add the new node
 * @n:data to include in the node
 * Return: address of the new node or NULL otherwise
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new;
	size_t pos, len;

	pos = len = 0;
	current = *h;
	len = dll_len(current);
	if (idx > len)
		return (NULL);
	if (idx == len)
		new = add_dnodeint_end(h, n);
	else if (idx == 0 && current == NULL || idx == 0)
	{
		new = add_dnodeint(h, n);
	}
	else
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		while (pos != idx - 1)
		{
			current = current->next;
			pos++;
		}
		new->next = current->next;
		new->prev = current;
		current->next = new;
	}

	return (new);
}
