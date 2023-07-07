#include "main.h"

/**
 * print_line - print the character _  n number of times
 * @n: times to print _ if n is greater than 0
 *
 */


void print_line(int n)
{
	int printNumber = 0;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		while (printNumber < n)
		{
			_putchar(95);
			printNumber++;
		}
		_putchar(10);
	}
}
