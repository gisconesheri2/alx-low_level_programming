#include <stdlib.h>
/**
 * array_range - creates an array with all values from min to max(included)
 * @min: minimum number
 * @max: maximum number
 * Return: pointer to the array created
 */

int *array_range(int min, int max)
{
	int *int_array;
	unsigned int size;
	int min1 = min;

	if (min > max)
		return (NULL);

	for (size = 0; min1 <= max; size++)
		min1++;

	int_array = malloc(sizeof(int) * size);
	if (int_array == NULL)
		return (NULL);

	for (size = 0; min <= max; size++)
	{
		int_array[size] = min;
		min++;
	}

	return (int_array);
}
