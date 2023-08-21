#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int l;
	int L;

	l = 97;
	L = 65;

	while (l < 123)
	{
		putchar(l);
		l++;
	}
	while (L < 91)
	{
		putchar(L);
		L++;
	}
	putchar(10);
	return (0);
}
