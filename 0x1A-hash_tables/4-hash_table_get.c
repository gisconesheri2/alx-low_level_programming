#include "hash_tables.h"

/**
 * hash_table_get - return the vlaue associated the the @key
 * @ht: hash table that could contain the key
 * @key: String to lokup in the hash table
 *
 * Return: the value associated with the key, NULL otherwise
 */

char *hash_table_get(hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node;

	if (ht == NULL)
		return (NULL);

	index = key_index((unsigned const char*)key, ht->size);
	current_node = ht->array[index];

	if (current_node == NULL)
		return (NULL);

	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
		current_node = current_node->next;
	}

	return (NULL);
}
