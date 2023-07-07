#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - return sum of all data in listint_t linked list
 * @head: pointer to the head of the linked list
 * Return: Sum of all data, 0 if the linked list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *current_node = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (current_node->next != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}

	sum += current_node->n;

	return (sum);
}
