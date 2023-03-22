#include "3-calc.h"
#include <stddef.h>
#include <string.h>

/**
 * get_op_func - select the required operator
 * @s: the opertor passed to the program
 * Return: a pointer to the corresponding function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int i;
	
	i = 0;
	while (i < 6)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (0);
}
