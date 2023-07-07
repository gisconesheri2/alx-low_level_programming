#include "main.h"

/**
 * print_last_digit - prints the last number in the provided integer
 * @n: number to work on
 *
 * Return: The last digit of the number provided without a sign
 */

int print_last_digit(int n)
{
	/* call the absolute function defined in 6-abs.c*/
	int lastDigit;
	int count = 48;
	int counter = 0;

	lastDigit = n % 10;

	if (lastDigit < 0)
	{
		lastDigit = lastDigit * -1;
	}


	while (count < 58)
	{
		if (lastDigit == counter)
		{
			_putchar(count);
			break;
		}
		else
		{
			count++;
			counter++;
		}
	}
	return (lastDigit);
}
