#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: parameters
 * @...: parameters to be added
 * Return: 0 alaways.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int j, add = 0;

	va_start(ap, n);

	for (j = 0; j < n; j++)
		add += va_arg(ap, int);

	va_end(ap);

	return (add);
}
