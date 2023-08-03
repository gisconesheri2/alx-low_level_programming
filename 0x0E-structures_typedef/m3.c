#include <stdio.h>
#include "dog.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    dog_t *my_dog;
	    char *name = "Poppy";
	    char *owner = "Bob";

	        my_dog = new_dog(name, 3.5, owner);

		if (my_dog == NULL)
		{
			printf("Failed\n");
			return (1);
		}
		
		if (my_dog->name == name)
		{
			printf("NOpe\n");
			return (1);
		}
		    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
		   /* free_dog(my_dog);*/
		        return (0);
}
