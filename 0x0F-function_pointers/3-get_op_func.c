#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Gets the correct function to perform the requested
 * arithmetic operation
 * @s: Arithmetic operation as a string
 * Return: Pointer to the appropriate funtion
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
