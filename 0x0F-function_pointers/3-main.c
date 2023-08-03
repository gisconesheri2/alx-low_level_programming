#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * main - performs mathematical operations
 * @argc: number of arguments passed to the function
 * @argv: 3 arguments containing two integers and an operand
 * Return: 98 if arguments supplied are not enough
 * 99 if an invalid operand given
 * 100 if division or modulo by zero
 * 0 program runs successfully
 */

int main(int argc, char **argv)
{
	int (*oper)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oper = get_op_func(argv[2]);

	if (oper == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (num2 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", oper(num1, num2));
	exit(0);
}
