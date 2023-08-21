#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int l;

	l = 122;

	while (l > 96)
	{
		putchar(l);
		l--;
	}
	putchar(10);
	return (0);
}
