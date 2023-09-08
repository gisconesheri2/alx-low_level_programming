#include "hash_tables.h"

/**
 * hash_table_print - prints all values in @ht
 * @ht: a HashTable containing key value pairs
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int first_item = 1;
	hash_node_t *cn;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		cn = ht->array[i];
		if (cn == NULL)
			continue;
		if (first_item)
		{
			printf("'%s': '%s'", cn->key, cn->value);
			if (cn->next != NULL)
			{
				while (cn->next != NULL)
				{
					cn = cn->next;
					printf(", '%s': '%s'", cn->key, cn->value);
				}
			}

			first_item = 0;
			continue;
		}
		printf(", '%s': '%s'", cn->key, cn->value);
		if (cn->next != NULL)
		{
			while (cn->next != NULL)
			{
				cn = cn->next;
				printf(", '%s': '%s'", cn->key, cn->value);
			}
		}

	}
	printf("}\n");
}
