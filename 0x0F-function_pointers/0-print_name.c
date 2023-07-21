#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name using f
 * @name: string
 * @f: pointer function
 * Return: null
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
