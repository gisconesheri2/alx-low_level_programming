#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"
#include <string.h>

int main(void)
{
	list_t *head;

	head = NULL;

	add_node(&head, "allesandro");
	add_node(&head, "iko");
	add_node(&head, "a");
	add_node(&head, "intimaciobelion");
	add_node(&head, "alles");
	print_list(head);

	return (0);
}
