#include "main.h"
/**
 * _isalpha - functiom that checks for alphabet character
 * @c : parameter
 * Return: 1 ifsuccessful otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
