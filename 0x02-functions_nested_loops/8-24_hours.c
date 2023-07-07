#include "main.h"
/**
 * jack_bauer - print all the hours
 */

void jack_bauer(void)
{
	int hour1 = 48;
	int hour2;
	int min1;
	int min2;

	while (hour1 < 51)
	{
		hour2 = 48;
		while (hour2 < 58)
		{
			min1 = 48;
			while (min1 < 54)
			{
				min2 = 48;
				while (min2 < 58)
				{

					_putchar(hour1);
					_putchar(hour2);
					_putchar(':');
					_putchar(min1);
					_putchar(min2);
					_putchar(10);
					min2++;
				}
				min1++;
			}
			hour2++;
			if (hour1 == 50 && hour2 == 52)
			{
				break;
			}

		}
		hour1++;
	}
}
