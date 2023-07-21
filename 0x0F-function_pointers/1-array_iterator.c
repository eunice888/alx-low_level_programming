#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - print each array elem on a newl
 * @array: an array
 * @size: how many to print
 * @action: pointer to print in regular or hexadecimal
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int u;

	if (array == NULL || action == NULL)
		return;

	for (u = 0; u < size; u++)
	{
		action(array[u]);
	}
}
