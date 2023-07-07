#include "lists.h"
#include <stdlib.h>

void free_list(list_t *h)
{
	list_t *p;

	p = h;

	while (p != NULL)
	{
		free(p->str);
		p = p->next;
	}
}
