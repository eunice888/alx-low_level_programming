#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Correct function to perform operation
 * @s: Operator passed as argument.
 *
 * Return: Pointer to the function
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

	int u = 0;

	while (ops[u].op != NULL && *(ops[u].op) != *s)
		u++;

	return (ops[u].f);
}
