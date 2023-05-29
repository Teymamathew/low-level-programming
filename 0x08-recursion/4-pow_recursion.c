#include "main.h"
/**
 * _pow_recursion - function that prints the value of x raise to power of y
 * @x: parameter value
 * @y: parameter raised
 * Return: the value of x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
