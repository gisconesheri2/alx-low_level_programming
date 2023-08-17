#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - convert a string of 0s and 1s to decimal number
 * @b: pointer to the string with binary numbers
 * Return: converted number or 0 if conversion fails
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	char *reverse_b;
	int multiple_of_two = 1;

	int len;
	int i = 0;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;
	reverse_b = malloc(sizeof(char) * len);
	if (reverse_b == NULL)
		return (0);

	for (; len >= 0; len--)
	{
		reverse_b[i] = b[len];
		i++;
	}

	for (len = 1; len < i; len++)
	{
		if (reverse_b[len] == '0')
			num = num + (0 * multiple_of_two);
		else if (reverse_b[len] == '1')
			num = num + (1 * multiple_of_two);
		else
			return (0);
		multiple_of_two *= 2;
	}
	free(reverse_b);
	return (num);
}
