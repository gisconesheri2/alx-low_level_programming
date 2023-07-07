#include "main.h"
/**
 * _puts - prints a string to the string
 * @str: string to print
 */
void _puts(char *str)
{
	int count = 0;

	while (*(str + count) != '\0')
	{
		_putchar(*(str + count));
		count++;
	}
	_putchar(10);
}
