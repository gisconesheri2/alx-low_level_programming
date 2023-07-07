#include <stdio.h>

unsigned int _strspn(char *, char *);

/**
 *  * main - check the code for Holberton School students.
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
		char *s = "abcdef";
			char *f = "";
				unsigned int n;

					n = _strspn(s, f);
						printf("%u\n", n);
							return (0);
}
