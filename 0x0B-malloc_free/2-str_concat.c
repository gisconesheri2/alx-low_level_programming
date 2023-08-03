#include <stdlib.h>

/**
 * str_concat - joins s1 and s2 and returns a pointer to new string
 * @s1: string one
 * @s2: string two
 * Return: pointer to a newly allocated memomry with s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, new_size;
	int j = 0;
	char *new_str;

	if (s1 == NULL)
		len1 = 0;
	else
		for (len1 = 0; s1[len1] != '\0'; len1++)
			;
	if (s2 == NULL)
		len2 = 0;
	else
		for (len2 = 0; s2[len2] != '\0'; len2++)
			;

	new_size = len1 + len2;

	new_str = malloc(sizeof(char) * (new_size + 1));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < new_size; i++)
	{
		if (s1 != NULL)
			new_str[i] = s1[i];
		if (i >= len1 && s2 != NULL)
		{
			new_str[i] = s2[j];
			j++;
		}
	}
	return (new_str);
}
