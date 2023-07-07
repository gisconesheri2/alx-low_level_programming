#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * exponent_two - returns 2 to the power of times
 * @times: the exponent
 * Return: result of 2 to the power of 'times'
 */
unsigned long int exponent_two(unsigned long int times)
{
	if (times == 0)
		return (1);
	return (2 * exponent_two(times - 1));
}
/**
 * get_binary - convert a number into binary
 * @n: number to convert
 * Return: pointer to an array of 1s and 0s representing n
 */
int *get_binary(unsigned long int n)
{
	unsigned long int temp_n2 = n;
	unsigned long int temp_n;
	unsigned long int times, i = 0;
	int *binary_number;

	binary_number = malloc(sizeof(int) * 64);
	if (binary_number == NULL)
		return (NULL);

	for (; i < 64; i++)
		binary_number[i] = 0;

	if (n == 1)
		binary_number[0] = 1;
	while (temp_n2 > 1)
	{
		temp_n = temp_n2;
		times = 0;
		while (temp_n > 1)
		{
			temp_n = temp_n >> 1;
			times++;
		}

		binary_number[times] = 1;
		temp_n2 = temp_n2 - (exponent_two(times));
	}

	if (temp_n2 == 1)
		binary_number[0] = 1;
	return (binary_number);
}
/**
 * flip_bits - count the number of bits needed to be flipped
 * to get two numbers to be the same in binary
 * @n: number 1
 * @m: number 2
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int *n_binary;
	int *m_binary;
	int i = 0;
	unsigned int bits_to_flip = 0;

	n_binary = get_binary(n);
	m_binary = get_binary(m);

	if (n_binary == NULL || m_binary == NULL)
		return (0);

	while (i < 64)
	{
		if (n_binary[i] != m_binary[i])
		{
			bits_to_flip++;
		}
		i++;
	}
	return (bits_to_flip);
}
