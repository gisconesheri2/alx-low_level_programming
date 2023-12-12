#include "search_algos.h"

/**
 * exponent - returns the exponent
 * @base: base
 * @power: power
 * Return: base to power
 */

int exponent(int base, int power)
{
	int i;
	int result;

	result = 1;

	for (i = 0; i < power; i++)
	{
		result = base * result;
	}
	return (result);
}

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
 * binary_search_exp - use binary search algorithm to find @value
 * @array: array of intergers
 * @value: integer to search
 * @lower: lower bound of the binary search
 * @upper: upper bound of the binary search
 *
 * Return: index of @value or -1 if not found
 */

int binary_search_exp(int *array, int value, int lower, int upper)
{
	int middle, mid_num;

	if (array == NULL)
		return (-1);

	/* lower = 0; */
	/* upper = (int)size - 1; */

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

/**
 * exponential_search - search for number using exponential algorithm
 * @array: pointer to the first element in the array
 * @size: length of the array
 * @value: integer to search
 *
 * Return: index of the value or -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t low, high;
	int i, result;

	if (array == NULL)
		return (-1);

	i = low = 0;
	while (low < size)
	{
		low = exponent(2, i);
		high = exponent(2, i + 1);
		if (high > size)
		{
			low = exponent(2, i - 1);
			high = size - 1;
			break;
		}
		if (*(array + low) > value)
		{
			low = exponent(2, i - 1);
			high = exponent(2, i);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", low, *(array + low));
		i++;

	}
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	result = binary_search_exp(array, value, low, high);
	return (result);
}
