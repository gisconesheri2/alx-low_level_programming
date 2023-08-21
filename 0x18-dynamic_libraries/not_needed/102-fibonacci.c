#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 *
 * Return: always 0
 */

int main(void)
{
	unsigned long int num1 = 1;
	unsigned long int num2 = 2;
	int i;

	printf("%lu, %lu, ", num1, num2);

	for (i = 0; i < 48; i++)
	{
		unsigned long int num3 = num1 + num2;

		if (i == 47)
		{
			printf("%lu", num3);
			break;
		}

		printf("%lu, ", num3);
		num1 = num2;
		num2 = num3;
	}
	putchar(10);

	return (0);
}
