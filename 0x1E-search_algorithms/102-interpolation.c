#include "search_algos.h"


/**
 * interpolation_search - search for number using interpolation algorithm
 * @array: pointer to the first element in the array
 * @size: length of the array
 * @value: integer to search
 *
 * Return: index of the value or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;


	pos = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));

	if (pos > size)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}

	while (low <= high && value >= *(array + low) && value <= *(array + high))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, *(array + pos));

		if (*(array + pos) < value)
		{
			low = pos + 1;
		}
		else if (*(array + pos) > value)
			high = pos - 1;
		else
		{
			return (pos);
		}
	}

	if (value == *(array + low))
		return (low);
	else
		return (-1);
}
