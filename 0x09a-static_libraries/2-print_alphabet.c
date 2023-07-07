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
		putchar(l);
		l++;
	}
	putchar(10);
	return (0);
}
