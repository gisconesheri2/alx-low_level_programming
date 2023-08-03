#include <stddef.h>
/**
 * int_index - searches for an integer
 * @array: array of integers to search through
 * @size: number of elements in the array
 * @cmp: pointer to a function to be used to compare values
 * Return: -1 if no element is found or size is <= 0 or
 * first index where cmp does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
