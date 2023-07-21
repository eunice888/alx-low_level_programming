#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Print the result
 * @argc: Number of arguments to the program
 * @argv: Array of pointers to the arguments
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int u, v;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	u = atoi(argv[1]);
	op = argv[2];
	v = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && v == 0) ||
	    (*op == '%' && v == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(u, v));

	return (0);
}
