#include "main.h"

/**
 * set_string - set value of a pointer to a char
 * @s: a pointer to pointer
 * @to: a pointer char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
