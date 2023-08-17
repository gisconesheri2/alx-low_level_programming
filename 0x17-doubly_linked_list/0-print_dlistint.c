#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint - print the contents of doubly linked list
 * @h: beginning node of the linked list
 * Return: length of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t len = 0;

	current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		len++;
	}
	return (len);
}
