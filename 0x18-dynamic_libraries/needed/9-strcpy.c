/**
 * _strcpy - copies string from source to destination
 * @dest: location to copy string to
 * @src: string to be copied
 * Return: pointer to the destination
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
