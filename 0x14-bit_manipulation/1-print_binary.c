#include "main.h"
#include <stdio.h>

unsigned long int exponent_two(unsigned long int times)
{
	if (times == 0)
		return (1);
	return (2 * exponent_two(times - 1));
}

unsigned long int get_bin(unsigned long int times)
{
	unsigned long int binary_num = 1;

	for (; times > 0; times--)
	{
		binary_num = binary_num * 10;
	}
	return (binary_num);
}

void print_binary(unsigned long int n)
{
	unsigned long int temp_n2 = n;
	unsigned long int temp_n;
	unsigned long int times = 0;
	unsigned long int binary_number = 0;

	while (temp_n2 > 1)	
	{
		temp_n = temp_n2;
		times = 0;
		printf("temp_n is now %lu\n", temp_n);
		while (temp_n > 1)
		{
			temp_n = temp_n >> 1;
			times++;
		}
	
		printf("times after loop is %lu\n", times);
		printf("get_bin returns %lu\n", get_bin(times));
		binary_number += get_bin(times);
		printf("binary number is %lu\n", binary_number);
		temp_n2 = temp_n2 - (exponent_two(times));
		printf("temp_n2 is now %lu\n", temp_n2);
	}
	_putchar(binary_number);
}

int main(void)
{
	print_binary(1024);
	return (0);
}
