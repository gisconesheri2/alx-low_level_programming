#include "hash_tables.h"

/**
 * hash_table_delete - deletes and free memory used by @ht
 * @ht: hash table to delete
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *cn, *fn;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		cn = ht->array[i];
		if (cn == NULL)
			continue;
		else
		{
			while (cn != NULL)
			{
				fn = cn;
				free(fn->key);
				free(fn->value);
				cn = fn->next;
				free(fn);
			}
		}
	}
	free(ht->array);
	free(ht);
}
