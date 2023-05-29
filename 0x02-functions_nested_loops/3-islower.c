#include "main.h"
/**
 * _islower - function that checks for lowercase character
 * @c : parameter
 *  Return: 1 iit is a lowercase otherwise 0
 */
int _islower(int c)
{
	if (c >= 97  && c <= 122)
		return (1);
	else
		return (0);
}
