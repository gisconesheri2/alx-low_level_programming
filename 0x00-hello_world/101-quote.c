#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 1 as an error
 */
int main(void)
{
	char fline[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	unsigned long sofc = (unsigned long)sizeof(fline);

	fwrite(2, fline, sofc);
	return (0);
}
