#include <stdio.h>
#include "dog.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    dog_t my_dog;

	        my_dog.name = NULL;
		   my_dog.age = 3.4;
		        my_dog.owner = NULL;
			    print_dog(&my_dog);
			        return (0);
	}
