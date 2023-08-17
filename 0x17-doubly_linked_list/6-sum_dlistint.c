#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - add all the int values in the list
 * @head: beginning of the list
 * Return: sum of all the values or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	current = head;
	if (current == NULL)
		return (0);

	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
