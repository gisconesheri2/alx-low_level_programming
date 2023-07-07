#include "main.h"

/**
 * print_square - print a square using # of given size
 * @size: size of square
 *
 */


void print_square(int size)
{
	int printNumber = 0;
	int noOfHash;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		while (printNumber < size)
		{
			noOfHash = 0;
			while (noOfHash < size)
			{
				_putchar(35);
				noOfHash++;
			}
			_putchar(10);
			printNumber++;
		}
	}
}
