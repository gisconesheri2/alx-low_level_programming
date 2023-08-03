#include <stdlib.h>
/**
 * malloc_checked - returns a pointer to alocated memory
 * if it fails, in terminates normal processes with status value of 98
 * @b: number of bytes to allocate
 * Return: a void pointer to the created memory
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
