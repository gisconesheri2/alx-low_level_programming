#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * add_nodeint -  add a new node in the beginning of a linked list
 * @head: pointer to the address of the current first node
 * @n: number to include in the linked list
 * Return: pointer to the newly_created node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
