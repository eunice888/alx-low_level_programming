#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Print strings, followed by a new line
 * @separator: String between strings
 * @n: Number of strings
 * @...: Variable number of strings to be printed
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list u;
	char *w;
	unsigned int v;

	va_start(u, n);

	for (v = 0; v < n; v++)
	{
		w = va_arg(u, char *);

		if (w == NULL)
			printf("(nil)");
		else
			printf("%s", w);

		if (v != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(u);
}
