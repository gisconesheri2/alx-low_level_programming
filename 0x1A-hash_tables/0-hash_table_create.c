#include "hash_tables.h"
/**
 * hash_table_create - creates a new hash table
 * @size: size of the hash table
 * Return: a pointer to a hash_table_t struct
 */

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
	if (new_hash->array == NULL)
		return (NULL);

	while (i < size)
	{
		new_hash->array[i] = NULL;
		i++;
	}
	return (new_hash);
}
