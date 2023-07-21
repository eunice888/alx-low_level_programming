#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum of paramters
 * @n: Number of paramters passed to the function
 * @...: Variable number of paramters
 *
 * Return: If n == 0 - 0.
 *         Otherwise - Sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int u, sum = 0;

	va_start(ap, n);

	for (u = 0; u < n; u++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
