#include "variadic_functions.h"
#include <stddef.h>

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    print_strings(", ", 2, "Jay", "Django");
	   print_strings(NULL, 2, "Jay", "Django");
	  print_strings(", ", 2, NULL, "Django");
	  print_strings(", ", 0);
	  print_strings(", ", 1, "Jay");
	        return (0);
}
