#include <stdio.h>

/**
 * main - print all arguments passed to the function
 * @argc: number of arguments
 * @argv: pointer to the array of strings passed as arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
