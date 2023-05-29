#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: parameter numbers
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list figures;
	unsigned int k;

	va_start(figures, n);

	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(figures, int));

		if (k != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(figures);
}
