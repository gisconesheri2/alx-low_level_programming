#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    listint_t *head;
	        listint_t *node;

		    head = NULL;
		        add_nodeint_end(&head, -12);
		    add_nodeint_end(&head, 6);
		    node = get_nodeint_at_index(head, 1);

if (node == NULL)
{
	printf("index out of range\n");
	free_listint2(&head);
	return (0);
}
printf("%d\n", node->n);
								    print_listint(head);
								        free_listint2(&head);
									    return (0);
}
