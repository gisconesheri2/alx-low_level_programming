/**
 * _strstr - find needle in the haysatck
 * @haystack: string within whicj to searc
 * @needle: string to search
 * Return: pointer to the needle
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
			}
		}
	}
	return (haystack);
}
