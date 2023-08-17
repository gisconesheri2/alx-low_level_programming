#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a node to the beginning of a doubly linked list
 * @head: beginning node of the linked list
 * @n:data to add
 * Return: address of the new node or NULL otherwise
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	current = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (current == NULL)
	{
		*head = new;
	}
	else
	{
		current->prev = new;
		new->next = *head;
		new->prev = NULL;
		*head = new;
	}
	return (new);
}
