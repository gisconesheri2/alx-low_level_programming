#include <stdio.h>
/**
 * print_diagsums - prints sum of the diagonals
 * @a: array of integers
 * @size: size of the 2d array
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int square = size * size;
	int diagonal_sum = 0;
	int diagonal_sum2 = 0;

	for (i = 0; i < square; i += size)
	{
		for (j = 0; j < size; j++)
		{
			if (j == (i / size))
				diagonal_sum += (a + i)[j];
		}
	}
	j = 0;
	for (i = square - size; i >= 0; i -= size)
	{
		diagonal_sum2 += (a + i)[j];
		j++;
	}
	printf("%d, %d\n", diagonal_sum, diagonal_sum2);
}
