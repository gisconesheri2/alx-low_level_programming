#include <stdio.h>
/**
 * main - print the number of arguments passed in the main function
 * @argc: count of argumennts including the calling funtion
 * @argv: the arguments to the function
 * Return: always 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
