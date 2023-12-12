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
 * binary_search_adv - use binary search algorithm to find @value
 * @arr: array of intergers
 * @l: left bound
 * @r: right bound
 * @x: integer to search
 *
 * Return: index of @value or -1 if not found
 */

int binary_search_adv(int *arr, int l, int r, int x)
{
	int mid;

	if (r >= l)
	{
		print_array(arr + l, (r - l + 1));
		mid = (l + r) / 2;
		if (*(arr + l) == x)
			return (l);
		if (*(arr + mid) < x)
			return (binary_search_adv(arr, mid + 1, r, x));
		return (binary_search_adv(arr, l, mid, x));
	}
	return (-1);
}

/**
 * advanced_binary - use binary search algorithm to find left index of @value
 * @array: array of intergers
 * @size: size of the array
 * @value: integer to search
 *
 * Return: index of @value or -1 if not found
 */

int advanced_binary(int *array, size_t size, int value)
{
	int lower, upper, result;

	if (array == NULL)
		return (-1);

	lower = 0;
	upper = (int)size - 1;
	result = binary_search_adv(array, lower, upper, value);

	return (result);
}
