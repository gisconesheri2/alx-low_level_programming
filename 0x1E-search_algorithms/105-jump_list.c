#include <math.h>
#include "search_algos.h"

/**
 * jump_list - search for number in linked list using jump_algorithm
 * @list: pointer to the first element in the linked list
 * @size: length of the array
 * @value: integer to search
 *
 * Return: pointer to the node with the value or NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int jump_size, pos, i, num_pos;
	listint_t *current_node;

	if (list == NULL)
		return (NULL);
	pos = jump_size = (int)sqrt(size);
	i = 0;
	current_node = list;
	while (pos < (int)size)
	{
		for (; i < pos; i++)
			current_node = current_node->next;

		num_pos = current_node->n;
		if (num_pos < value)
		{
			printf("Value checked at index [%d] = [%d]\n", pos, num_pos);
			pos = pos + jump_size;
			if (pos > (int)size - jump_size)
			{
				for (; i < pos - 1 ; i++)
					current_node = current_node->next;
				num_pos = current_node->n;
				printf("Value checked at index [%d] = [%d]\n", pos - 1, num_pos);
				printf("Value found between indexes [%d] and [%d]\n", pos - jump_size, pos - 1);
				pos = pos - jump_size;
				current_node = list;
				for (i = 0; i < pos; i++)
					current_node = current_node->next;
				for (; pos < (int)size; pos++)
				{
					num_pos = current_node->n;
					printf("Value checked at index [%d] = [%d]\n", pos, num_pos);
					if (num_pos == value)
						return (current_node);
				current_node = current_node->next;
				}
				return (NULL);
			}
		}
		else if (num_pos >= value)
		{
			printf("Value checked at index [%d] = [%d]\n", pos, num_pos);
			printf("Value found between indexes [%d] and [%d]\n", pos - jump_size, pos);
			pos = pos - jump_size;
			current_node = list;
			for (i = 0; i < pos; i++)
				current_node = current_node->next;

			for (i = 0; i <= jump_size; i++, pos++)
			{
				num_pos = current_node->n;
				printf("Value checked at index [%d] = [%d]\n", pos, num_pos);
				if (num_pos == value)
					return (current_node);
				current_node = current_node->next;
			}
			return (NULL);
		}
	}
	return (NULL);
}
