#include <stdlib.h>

/**
 * create_array - create an array of characters and initialize with c
 * @size: size of array
 * @c: character to initialize with
 * Return: pointer to the created array
 */

char *create_array(unsigned int size, char c)
{
	char *str_array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	str_array = malloc(size * sizeof(char));
	if (str_array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		str_array[i] = c;
	}

	return (str_array);
}
