#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments
 * passed to the function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int j;
	char *t, *div = "";

	va_list ls;

	va_start(ls, format);

	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", div, va_arg(ls, int));
					break;
				case 'i':
					printf("%s%d", div, va_arg(ls, int));
					break;
				case 'f':
					printf("%s%f", div, va_arg(ls, double));
					break;
				case 's':
					t = va_arg(ls, char *);
					if (!t)
						t = "(nil)";
					printf("%s%s", div, t);
					break;
				default:
					j++;
					continue;
			}
			div = ", ";
			j++;
		}
	}
	printf("\n");
	va_end(ls);
}
