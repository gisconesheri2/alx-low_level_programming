/**
 * _strlen - count the number of characters in a string
 * @s: string to count
 * Return: length of s
 */

int _strlen(char *s)
{
	int len = 0;
	int count = 0;

	while (*(s + count) != '\0')
	{
		len = len + 1;
		count++;
	}
	return (len);
}
