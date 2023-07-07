#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"
#include <string.h>

int main(void)
{
	list_t *head;

	head = NULL;

	add_node_end(&head, "allesandro");
	add_node_end(&head, "iko");
	add_node_end(&head, "a");
	add_node_end(&head, "intimaciobelion");
	add_node_end(&head, "alles");
	print_list(head);
	free_list(head);

	return (0);
}
