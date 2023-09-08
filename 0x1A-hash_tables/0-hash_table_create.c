#include "hash-tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;
	unsigned long int i;

	i = 0;
	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
	{
		return (NULL);
	}
	new_hash->size = size;
	new_hash->array = malloc(size * (sizeof(hash_node_t)));

	while (i < size)
	{
		new_hash->array[i] = NULL;
		i++;
	}
	return (new_hash);
}
