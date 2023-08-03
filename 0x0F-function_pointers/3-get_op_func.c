#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - selects the correct function to perform operation requested
 * @s: symbol for the operation to perform
 * Return: function to perform the operation requested, NULL otherwise
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"%", op_mod},
		{"/", op_div},
		{NULL, NULL}
	};

	while (i < 5)
	{
		if (*ops[i].op == *s)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
