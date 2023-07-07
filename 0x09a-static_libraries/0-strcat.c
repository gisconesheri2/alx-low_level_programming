/**
 * _strcat - copies the string from src to dest
 * @dest: location where to copy of the string
 * @src: string to copy
 * Return: pointer to the destination
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int i;

/*get the length of the destination string*/
	while (dest[destlen] != '\0')
	{
		destlen++;
	}

/*write the src string to destination*/

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[destlen + i] = src[i];
	}
/*add the null character*/
	dest[destlen + i] = '\0';

	return (dest);
}
