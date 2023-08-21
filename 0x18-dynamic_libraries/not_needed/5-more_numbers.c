#include "main.h"
/**
 * more_numbers - print numbers 0-14
 */
void more_numbers(void)
{
	int i;
	int number;
	int count;
	int lines = 0;

	while (lines < 10)
	{
		number = 48;
		count = 0;
		i = 48;

		while (count < 15)
		{
			if (count == 10)
			{
				i = 49;
			}
			_putchar(i);
			if (count > 9)
			{
				_putchar(number);
				number++;
				i = 48;
			}

			count++;
			i++;
		}

		_putchar(10);
		lines++;
	}
}
