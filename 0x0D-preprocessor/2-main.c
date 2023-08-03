#include <stdio.h>
/**
 * main - prints out the file name the program was compiled from
 * Return: always 0
 */

int main(void)
{
	char *s;

	s = __FILE__;

	printf("%s\n", s);
	return (0);
}
