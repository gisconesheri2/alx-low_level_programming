#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	int count = 0;
	int c;

	while (count < 10)
	{
		c = 97;

		while (c < 123)
		{
			_putchar(c);
			c++;
		}
		_putchar(10);
		count++;
	}
}
