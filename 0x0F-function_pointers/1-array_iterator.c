#include <stddef.h>
/**
 * array_iterator - performs action specified by 'action'
 * on the members on the array 'array'
 * @array: array on integers to traverse through
 * @size: size of the array
 * @action: function given as a parameter to perform on each element
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (action == NULL || array == NULL)
			break;
		action(array[i]);
	}
}
