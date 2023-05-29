#include "main.h"
int final_sqrt_recursion(int n, int j);
/**
 * _sqrt_recursion - function that returns square root
 * @n: number with the square root
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (final_sqrt_recursion(n, 0));
}
/**
 * final_sqrt_recursion - function that returns square root
 *  @n: number with the square root
 *  @j: add number
 *  Return: root of n
 */
int final_sqrt_recursion(int n, int j)
{
	if ((j * j) == n)
	{
		return (j);
	}
	else if ((j * j) > n)
		return (-1);
	return (final_sqrt_recursion(n, j + 1));
}
