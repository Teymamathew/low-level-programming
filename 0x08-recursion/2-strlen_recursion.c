#include "main.h"
/**
 * _strlen_recursion - function thatbreturns the length of a string
 * @s: inputbparameter
 * Return: 0 always when successful
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
