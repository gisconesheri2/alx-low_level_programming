#include <stddef.h>
/**
 * _strpbrk - locates the first occurrence in the string s in the string accept
 * @s: string to search for
 * @accept: bytes to search for
 * Return: pointer to byte in s that matches one of the bytes in accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
