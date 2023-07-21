#include "function_pointers.h"
/**
 * int_index - return the index place if comparison = true, else -1
 * @array: array
 * @size: size of elements in the array
 * @cmp: pointer
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int u;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (u = 0; u < size; u++)
	{
		if (cmp(array[u]))
			return (u);
	}
	return (-1);
}
