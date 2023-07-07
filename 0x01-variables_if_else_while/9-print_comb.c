#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int l;
	int space;
	int comma;

	l = 48;
	space = 32;
	comma = 44;

	while (l < 58)
	{
		putchar(l);
		if (l == 57)
		{
			break;
		}
		putchar(comma);
		putchar(space);
		++l;
	}
	putchar(10);
	return (0);
}
