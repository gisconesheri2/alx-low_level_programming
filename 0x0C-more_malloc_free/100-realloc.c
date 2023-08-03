#include <stdlib.h>
/**
 * mem_copy - copies bytes from src to dest
 * @dest: location to copy bytes to
 * @src: location where to copy bytes from
 * @size: number of bytes to copy from src to dest
 * Return: pointer to the setination
 */

void *mem_copy(void *dest, void *src, unsigned int size)
{
	unsigned char *sPtr = src;
	unsigned char *dPtr = dest;

	while (size > 0)
	{
		*dPtr = *sPtr;
		++dPtr;
		++sPtr;
		size--;
	}
	return (dest);
}

/**
 * _realloc - reallocates a memory block with new size
 * @ptr: pointer to memory previously allocated with call to malloc
 * @old_size: memory previously allocated to ptr
 * @new_size: bytes in the new memory block
 * Return: pointer to the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_mem;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_mem = malloc(new_size);
		if (new_mem == NULL)
			return (NULL);
		return (new_mem);
	}
	if (new_size < old_size)
	{
		new_mem = malloc(new_size);
		if (new_mem == NULL)
			return (NULL);
		mem_copy(new_mem, ptr, new_size);
		free(ptr);
		return (new_mem);
	}
	new_mem = malloc(new_size);
	if (new_mem == NULL)
		return (NULL);
	mem_copy(new_mem, ptr, old_size);
	free(ptr);
	return (new_mem);
}
