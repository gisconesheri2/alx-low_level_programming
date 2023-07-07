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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
			return (s + i);
	}
	return (NULL);
}
