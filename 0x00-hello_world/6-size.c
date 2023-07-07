#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 fos success
 */
int main(void)
{
	char c;
	int num;
	long int num1;
	long long int nm2;
	float dec;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(num));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(num1));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(nm2));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(dec));
	return (0);
}
