#include <stdio.h>

/**
 * main - prints fuzz for multiples of 3, buzz for multiples of 5
 * and fuzzbuzz for multiples of both
 * Return: 0
 */

int main(void)
{
	int num;

	num = 1;
	printf("%d", num);
	num = 2;

	while (num < 101)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (num % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (num % 3 == 0)
		{
			printf(" Fizz");
		}
		else
		{
			printf(" %d", num);
		}
		num++;
	}

	printf("\n");
	return (0);
}
