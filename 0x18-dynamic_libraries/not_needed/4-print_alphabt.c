#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int l;

	l = 97;

	while (l < 123)
	{
		if (l == 101 || l == 113)
		{
			l++;
			continue;
		}
		else
		{
		putchar(l);
		l++;
		}
	}

	putchar(10);
	return (0);
}
