#include <stdio.h>
/**
 * print_to_98 - prints the numbers between 98 and the number provided
 * @n: number to count from
 *
 */

void print_to_98(int n)
{
	int np = n;

	if (n <= 98)
	{
		while (np < 99)
		{
			printf("%d", np);
			if (np == 98)
			{
				break;
			}
			printf(", ");
			np++;
		}
	}
	else
	{
		while (np > 97)
		{
			printf("%d", np);
			if (np == 98)
			{
				break;
			}
			printf(", ");
			np--;
		}
	}
	putchar(10);
}
