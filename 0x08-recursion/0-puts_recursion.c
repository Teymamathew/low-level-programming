#include "main.h"
/**
 * _puts_recursion - function that prints a string
 * @s: parameter
 * Return: 0 always when successful
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar (*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar ('\n');
}
