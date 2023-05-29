#include "main.h"
/**
 * _isupper - function that checks for uppercase character
 * @c : function parameter
 * Return: 0 otherwise 1
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
