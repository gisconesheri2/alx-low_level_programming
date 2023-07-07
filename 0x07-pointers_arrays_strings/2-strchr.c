#include <stddef.h>
/**
 * _strchr - returns a pointer of the first occurence of c in s
 * @s: string to search for c
 * @c: character to search
 *
 * Return: pointer to the first occurence of c, NULL otherwise
 */

char *_strchr(char *s, char c)
{
	int i, len;

	for (len = 0; s[len] != '\0'; len++)
		;
	for (i = 0; i < len + 1; i++)
	{
		if (c == s[i])
			return (s + i);
	}

	return (NULL);
}
