#include <stdio.h>
/**
 * main - prints the name of the program running
 * @argc: count of the arguments passed
 * @argv: number of arguments passed
 * Return: always 0
 */

int main(int __attribute__((__unused__))argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
