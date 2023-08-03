#include <stdlib.h>
#include <stdio.h>
/**
 * main - adds all positive numbers supplied
 * @argc: number of arguments provided
 * @argv: numbers to be added
 * Return: 1 if any number can't be converted, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i;
	int x, y = 0;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		x = atoi(argv[i]);
		y = abs(x);
		if (y == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + y;
	}
	printf("%d\n", sum);
	return (0);
}
