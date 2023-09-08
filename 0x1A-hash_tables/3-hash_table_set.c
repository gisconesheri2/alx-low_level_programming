#include "hash_tables.h"

/**
 * hash_table_set - insert @key on the hash table @ht
 * @ht: hash table with a prespecified array
 * @key: string to use as a key, also generates the index
 * cannot be empty
 * if it generates an index that is already occupied,
 * the new node(item) is added to the top of a linked list
 * @value: item to associate with the key
 *
 * Return: 1 if successfully inserts @key, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current_node;

	if (ht == NULL)
		return (0);
	if (key == NULL || strlen(key) == 0)
		return (0);
	if (strlen(key) == 1 && key[0] == '\n')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = malloc(strlen(key) + 2);
	new_node->value = malloc(strlen(value) + 2);
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	new_node->next = NULL;

	current_node = ht->array[index];
	if (current_node == NULL)
		ht->array[index] = new_node;
	else
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(new_node->key);
			free(new_node->value);
			free(new_node);
			ht->array[index]->value = realloc(current_node->value, strlen(value) + 2);
			strcpy(ht->array[index]->value, value);
		}
		else
		{
			new_node->next = ht->array[index];
			ht->array[index] = new_node;

		}
	}
	return (1);
}
