#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - print a single linked list of struct list_t
 * @h: pointer to head of the linked list
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	list_t pp = {"", 0, NULL};
	list_t *p = &pp;
	int size = 0;

	p->str = h->str;
	p->len = h->len;
	p->next = h->next;


	while (p != NULL)
	{
		if (p->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", p->len, p->str);
		size++;
		p = p->next;
	}

	free(p);

	return (size);
}
