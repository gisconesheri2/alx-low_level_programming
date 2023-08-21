#include "main.h"

/**
 * print_triangle - print a square using # of given size
 * @size: size of square
 *
 */


void print_triangle(int size)
{
	int printNumber = 1;
	int noOfHash;
	int space;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		while (printNumber < size + 1)
		{
			space = size - printNumber;
			while (space--)
			{
				_putchar(32);
			}
			noOfHash = printNumber;
			while (noOfHash--)
			{
				_putchar(35);
			}
			printNumber++;
			_putchar(10);
		}
	}
}
