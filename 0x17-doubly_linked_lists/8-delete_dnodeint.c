#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
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
 * delete_dnodeint_at_index - insert new node at given index
 * @head: beginning of the double linked list
 * @index:pos to delete the new node
 * Return: 1 if successful, - 1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *p, *inter;
	size_t pos, len;

	pos = len = 0;
	current = *head;
	len = dll_len(current);
	if (index > len - 1)
		return (-1);
	if (len == 1)
	{
		free(current);
		*head = NULL;
		return (1);
	}

	if (current == NULL)
		return (-1);
	if (index == 0)
	{
		p = current;
		current = current->next;
		current->prev = NULL;
		free(p);
		*head = current;
	}
	else
	{
		while (pos != index - 1)
		{
			current = current->next;
			pos++;
			p = current;
		}
		current = current->next;
		p->next = current->next;
		inter = current;
		current = current->next;
		if (current != NULL)
			current->prev = p;
		free(inter);
	}
	return (1);
}
