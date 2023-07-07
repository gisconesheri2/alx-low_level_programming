#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int n = 48;
	int in = 48;

	for (n; n < 58; n++)
	{
		for (in; in < 58; in++)
		{
			if (n == in || in < n)
			{
				continue;
			}
			putchar(n);
			putchar(in);
			if (n == 56 && in == 57)
			{
				break;
			}
			/*print a coma and a space*/
			putchar(44);
			putchar(32);
		}
	}
	/*PRINT A NEWLINE*/
	putchar(10);
	return (0);
}
