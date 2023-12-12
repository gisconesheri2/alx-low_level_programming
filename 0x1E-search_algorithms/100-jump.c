#include <math.h>
#include "search_algos.h"

/**
 * jump_search - search for number using jump_algorithm
 * @array: pointer to the first element in the array
 * @size: length of the array
 * @value: integer to search
 *
 * Return: index of the value or -1
 */

int jump_search(int *array, size_t size, int value)
{
	int jump_size, pos, i, num_pos;

	if (array == NULL)
		return (-1);
	jump_size = (int)sqrt(size);
	pos = 0;
	while (pos <= (int)size)
	{
		num_pos = *(array + pos);
		if (num_pos < value)
		{
			printf("Value checked array[%d] = [%d]\n", pos, num_pos);
			pos = pos + jump_size;
		}
		else if (num_pos >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", pos - jump_size, pos);
			pos = pos - jump_size;
			for (i = 0; i <= jump_size; i++, pos++)
			{
				num_pos = *(array + pos);
				printf("Value checked array[%d] = [%d]\n", pos, num_pos);
				if (num_pos == value)
					return (pos);
			}
			return (-1);
		}
	}
	if (pos > (int)size - jump_size)
	{
		printf("Value found between indexes [%d] and [%d]\n", pos - jump_size, pos);
		pos = pos - jump_size;
		for (; pos < (int)size; pos++)
		{
			num_pos = *(array + pos);
			printf("Value checked array[%d] = [%d]\n", pos, num_pos);
			if (num_pos == value)
				return (pos);
		}
		return (-1);
	}
	return (-1);
}
