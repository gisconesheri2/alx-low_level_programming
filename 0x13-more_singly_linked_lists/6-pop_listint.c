#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - 'deletes' the first node in a linked list
 * @head: pointer to the address of the first node
 * Return: the data (n) of the first node, 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *new_head;
	listint_t *current_head = *head;

	int head_n;

	if (*head == NULL)
		return (0);

	head_n = (*head)->n;
	new_head = (*head)->next;
	*head = new_head;

	free(current_head);

	return (head_n);
}
