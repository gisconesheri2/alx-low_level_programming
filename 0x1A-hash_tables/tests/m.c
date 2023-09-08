#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always EXIT_SUCCESS.
 *     */
int main(void)
{
	    hash_table_t *ht;
	        char *value;

		    ht = hash_table_create(1024);
		        hash_table_set(ht, "c", "fun");
		        hash_table_set(ht, "hetairas", "cool beans");
		        hash_table_set(ht, "mentioner", "cooler beanssss");
		        hash_table_set(ht, "joyful", "fun");
		        hash_table_set(ht, "synaphea", "shieeet");

			value = hash_table_get(ht, "c");
			    printf("%s:%s\n", "c", value);
			value = hash_table_get(ht, "hetairas");
			    printf("%s:%s\n", "hetairas", value);
			value = hash_table_get(ht, "mentioner");
			    printf("%s:%s\n", "mentioner", value);
			value = hash_table_get(ht, "joyful");
			    printf("%s:%s\n", "joyful", value);

			 return(0);
}




