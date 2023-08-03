#include <stdio.h>
#include <stdlib.h>
/**
 * main - perform mulitiplaction of a and b
 * @argc: number of arguments passed to main
 * @argv: numbers to multiplied
 * Return: 1 if less than two numbers are given, otherwise 0
 */

int main(int argc, char *argv[])
{
	int x, y;

	/*if less than two numbers supplied,exit*/
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	/*sscanf converts the string supplied to an integer*/
	x = atoi(argv[1]);
	y = atoi(argv[2]);

	printf("%d\n", x * y);

	return (0);
}
