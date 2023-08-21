#include <stdio.h>
/**
 * print_array - print n number of integers from array a
 * @a: array of integers
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int count = 0;

	while (count != n)
	{
		if (n < 0)
		{
			break;
		}
		printf("%d, ", *(a + count));
		count++;
		if (count == n - 1)
		{
			printf("%d", *(a + count));
			break;
		}
	}
	putchar(10);
}
