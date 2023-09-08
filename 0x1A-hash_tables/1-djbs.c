#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c = 0;

	hash = 5381;
	while (str[c] != '\0')
	{
		hash = ((hash << 5) + hash) + c;
		c++;
	}
	return (hash);
}
