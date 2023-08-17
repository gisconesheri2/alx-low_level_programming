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
#include <stdio.h>
/**
 * clear_bit - sets the value of the bit at the given index to 1
 * @n: pointer to number to get the bits from
 * @index: position to get change the bits
 *
 * Return: 1 if it worked,, -1 if an error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	char *binary;
	char *true_binary;
	unsigned int rem, i, len = 0;
	unsigned long int tn = *n;

	binary = malloc(sizeof(char) * 65);
	true_binary = malloc(sizeof(char) * 65);
	if (binary == NULL || true_binary == NULL || index > 64)
		return (-1);
	tn = *n;
	i = 0;

	while (i <= 64)
	{
		rem = tn % 2;
		if (rem == 0)
			binary[i] = 48;
		if (rem == 1)
			binary[i] = 49;
		tn = tn >> 1;
		i++;
	}
	i = 0;
	while (i <= 64)
	{
		if (i == index)
			binary[i] = 48;
		i++;
	}

	for (; i > 0; i--)
	{
		true_binary[len] = binary[i - 1];
		len++;
	}

	*n = binary_to_uint(true_binary);
	free(binary);
	free(true_binary);
	return (1);
}
