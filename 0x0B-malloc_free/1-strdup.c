#include <stdlib.h>
/**
 * _strlen - calculates the length of a string
 * @s: string to calculate length
 * Return: size of string
 */

unsigned int _strlen(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _strdup - returns a pointer to new space in memory with a copy of str
 * @str: string which we will return a copy of
 * Return: pointer to new memory with a copy of str
 */
char *_strdup(char *str)
{
	char *new_string;
	unsigned int size, i;

	if (str == NULL)
		return (NULL);
	size = _strlen(str);

	new_string = malloc((size + 1) * sizeof(char));

	if (new_string == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		new_string[i] = str[i];
	}
	return (new_string);
}
