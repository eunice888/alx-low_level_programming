#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Print numbers, followed by a new line
 * @separator: string between numbers
 * @n: number of integers
 * @...: Variable number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list u;
	unsigned int v;

	va_start(u, n);

	for (v = 0; v < n; v++)
	{
		printf("%d", va_arg(u, int));

		if (v != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(u);
}
