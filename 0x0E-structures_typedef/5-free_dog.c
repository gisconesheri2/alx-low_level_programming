#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees the memory used by calling malloc
 * to create space for a new instance of a dog_t struct
 * @d: pointer to a malloc created memory block with a dog struct
 */

void free_dog(dog_t *d)
{
	free(d);
}
