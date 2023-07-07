#include "lists.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * add_node - adds an element of alinked list at the beginning
 * @head: pointer to the head of the list
 * @str: string to include as part of thr data of the struct list_t
 * Return: pointer to the added element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
