#include <stddef.h>

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: position to copy bytes from src
 * @src: source of the bytes to be copied
 * @n: number of bytes to copy from src
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[i];
	}
	return (dest);
}
