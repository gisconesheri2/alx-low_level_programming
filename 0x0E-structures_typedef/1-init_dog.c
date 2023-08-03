#include "dog.h"
#include <stddef.h>
/**
 * init_dog - initializes the attributes within the struct dog
 * @d: pointer to the memory allocated to an instance of the struct dog
 * @name: pointer to the string with the dog's name
 * @age: age of dog in years
 * @owner: pointer to the string with the dog's owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	(*d).age = age;
	d->owner = owner;
}
