#include "main.h"
/**
 * _isdigit - function that checks for a digit
 * @c : finction parameter
 * Return: 1 otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
