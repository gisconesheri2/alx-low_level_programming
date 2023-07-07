#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int l;
	int ch;

	l = 48;
	ch = 97;

	while (l < 58)
	{
		putchar(l);
		l++;
	}
	while (ch < 103)
	{
		putchar(ch);
		ch++;
	}
	putchar(10);
	return (0);
}
