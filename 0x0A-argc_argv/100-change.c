#include <stdlib.h>
#include <stdio.h>
/**
 * main - get the number of coins needed to return provided cents
 * @argc: number of arguments passed
 * @argv: one parameter that represents the cents to be worked on
 * Return: 1 if parameters given is not exactly one, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, cents, change = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/*convert the string containing numbers to an integer*/
	cents = atoi(argv[1]);

	/*if the parameter given is a negative number, exit function*/
	if (cents < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		change = change + (cents / coins[i]);
		if (cents % coins[i] == 0)
			break;
		cents = cents % coins[i];
	}
	printf("%d\n", change);
	return (0);
}
