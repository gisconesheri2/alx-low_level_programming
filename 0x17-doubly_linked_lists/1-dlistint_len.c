#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - print the contents of doubly linked list
 * @h: beginning node of the linked list
 * Return: length of the list
 */

size_t dlistint_len(const dlistint_t *h)
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
