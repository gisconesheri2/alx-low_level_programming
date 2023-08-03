#include <stdlib.h>
/**
 * _calloc - allocates memory for an array with nmemb of size size
 * @nmemb: number of elements in the array
 * @size: size of each member
 * Return: pointer to the allocated memory initialized to zero
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	/*unsigned int i;*/

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	return (mem);
}
