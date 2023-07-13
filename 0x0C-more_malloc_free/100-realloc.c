#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocate a memory block using malloc and free
 * @ptr: pointer to the memory that was allocated by malloc
 * @old_size: size of ptr allocated memory for
 * @new_size: new size of the memory block
 *
 * Return: pointer to the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *u;
	char *v;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	u = malloc(new_size);
	if (!u)
		return (NULL);

	v = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			u[i] = v[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			u[i] = v[i];
	}

	free(ptr);
	return (u);
}
