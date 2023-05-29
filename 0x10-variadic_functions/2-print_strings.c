#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: string to be printed between strings
 * @n: number of strings to be passed to function
 * @...: parameter
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *t;
	unsigned int k;

	va_start(string, n);

	for (k = 0; k < n; k++)
	{
		t = va_arg(string, char*);

		if (t == NULL)
			printf("(nil)");
		else
			printf("%s", t);

		if (k != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(string);
}
