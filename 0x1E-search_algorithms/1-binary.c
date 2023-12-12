#include "search_algos.h"

/**
 * print_array - prints the array
 * @array: pointer to the first element in the array
 * @size: size of the array
 *
 * Return: nothing
 */

void print_array(int *array, int size)
{
	int pos = 0;
	int *print_array = array;

	printf("Searching in array: %d", *print_array);
	print_array = print_array + 1;
	for (pos = 1; pos < size; pos++)
	{
		printf(", %d", *print_array);
		print_array = print_array + 1;
	}
	printf("\n");
}
/**
 * binary_search - use binary search algorithm to find @value
 * @array: array of intergers
 * @size: size of the array
 * @value: integer to search
 *
 * Return: index of @value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	int lower, upper, middle, mid_num;

	if (array == NULL)
		return (-1);

	lower = 0;
	upper = (int)size - 1;

	while (lower <= upper)
	{
		print_array(array + lower, (upper - lower + 1));
		middle = (lower + upper) / 2;
		mid_num = *(array + middle);
		if (mid_num < value)
			lower = middle + 1;
		else if (mid_num > value)
			upper = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
