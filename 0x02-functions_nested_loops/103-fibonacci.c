#include <stdio.h>

/**
 * main - print the sum of even terms in fibonacci numbers less than 4000000
 *
 * Return: always 0
 */

int main(void)
{
	unsigned long int num1 = 1;
	unsigned long int num2 = 2;
	unsigned long int num3 = num1 + num2;
	unsigned long int total = 2;

	while (num3 < 4000000)
	{
		if (num3 % 2 == 0)
		{
			total = total + num3;
		}
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
	}
	printf("%lu", total);
	putchar(10);

	return (0);
}
