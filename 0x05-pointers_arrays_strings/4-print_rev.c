#include "main.h"
/**
 * print_rev - prints a string in reverse order
 * @s: string to print in reverse
 */
void print_rev(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}

	count--;

	while (count >= 0)
	{
		_putchar(*(s + count));
		count--;
	}
	_putchar(10);
}
