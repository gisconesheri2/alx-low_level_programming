#include "main.h"
/**
 * print_alphabet - writes lowercase alphabet
 *
 */

void print_alphabet(void)
{
	int c = 97;

	while (c < 123)
	{
		_putchar(c);
		c++;
	}
	_putchar(10);
}
