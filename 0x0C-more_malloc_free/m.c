#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
	char *c;
	int *i;
	double *d;

	c = malloc_checked(sizeof(char) *1024);
	printf("%p\n", (void *)c);
	
	i = malloc_checked(sizeof(int) * 402);
	printf("%p\n", (void *)i);

	d = malloc_checked(INT_MAX);
	printf("%p\n", (void *)d);

	free(c);
	free(i);
	free(d);
	return (0);
}
