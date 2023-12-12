#include "search_algos.h"

/**
 * linear_search - searches for @value in @array of integers
 * @array: pointer to the first number in an array of integers
 * @size: length of the array
 * @value: value to search in the array
 *
 * Return: index of the value or -1
 */

int linear_search(int *array, size_t size, int value)
{
	int pos;
	int *num;

	if (array == NULL)
		return (-1);

	num = array;
	for (pos = 0; pos < (int)size; pos++)
	{
		printf("Value checked array[%d] = [%d]\n", pos, *num);
		if (*num == value)
			return (pos);
		num = num + 1;
	}
	return (-1);
}
