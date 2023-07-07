#include "lists.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * add_node_end - adds an element of a linked list at the end
 * @head:head pointer
 * @str: string to include as data part
 * Return: pointer (address) to the created node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *old_node;
	unsigned int i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		old_node = *head;
		while (old_node->next != NULL)
			old_node = old_node->next;
		old_node->next = new_node;
	}

	return (new_node);
}
