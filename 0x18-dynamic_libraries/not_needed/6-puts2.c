#include "main.h"
/**
 * puts2 - prints every second character in a string
 * @str: string to process
 */

void puts2(char *str)
{
	int count = 0;

	while (*(str + count) != '\0')
	{
		if (count % 2 == 0)
		{
			_putchar(*(str + count));
		}
		count++;
	}
	_putchar(10);
}
