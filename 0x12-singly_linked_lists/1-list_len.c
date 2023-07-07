#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * list_len - return a number of elements in linked list
 * @h: pointer to the head of the linked list
 * Return: number of nodes in linked list
 */

size_t list_len(const list_t *h)
{
	list_t p = {"", 0, NULL};
	list_t *pp = &p;
	size_t len = 0;
	pp->next = h->next;

	while (pp != NULL)
	{
		len++;
		pp = pp->next;
	}
	
	return (len);
}
