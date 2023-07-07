#include "main.h"

/**
 * print_diagonal - print the character \  n number of times
 * @n: times to print _ if n is greater than 0
 *
 */


void print_diagonal(int n)
{
	int printNumber = 0;
	int space;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		while (printNumber < n)
		{
			space = 0;

			while (space < printNumber)
			{
				_putchar(32);
				space++;
			}

			_putchar(92);
			_putchar(10);
			printNumber++;
		}
	}
}
