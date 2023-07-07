#include <stdio.h>
/**
 * main - computes the sum of all multiples of 3 and 5 below 1024
 *
 * Return: always 0
 */

int main(void)
{
	int num = 0;
	int total = 0;

	while (num < 1024)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			total = total + num;
		}
		num++;
	}
	printf("%d\n", total);
	return (0);
}
