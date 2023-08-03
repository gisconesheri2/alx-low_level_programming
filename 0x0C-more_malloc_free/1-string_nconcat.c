#include <stdlib.h>
/**
 * get_len - return the length of s
 * @s: string to process
 * Return: 0 if s is NULL or length of s
 */

int get_len(char *s)
{
	unsigned int len;

	if (s == NULL)
		len = 0;
	else
	{
		for (len = 0; s[len] != '\0'; len++)
			;
	}
	return (len);
}
/**
 * string_nconcat - copies s1 and n bytes from s2 to a new location
 * @s1: string one
 * @s2: string two
 * @n: number of bytes of s2 to join to s1
 * Return: pointer to a new string from joining s1 and s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int len1, i, new_len;
	int j = 0;

	len1 = get_len(s1);
	/*len2 = get_len(s2);*/
	
	new_len = len1 + n;

	new_string = malloc(sizeof(char) * (new_len + 1));
	if (new_string == NULL)
		return (NULL);

	for (i = 0; i < new_len; i++)
	{
		if (s1 != NULL)
		{
			new_string[i] = s1[i];
			if (i >= len1 && s2 != NULL)
			{
				new_string[i] = s2[j];
				j++;
			}
		}
		else if (s2 != NULL)
			new_string[i] = s2[i];
		else
			break;

	}
	new_string[i] = '\0';
	return (new_string);
}
