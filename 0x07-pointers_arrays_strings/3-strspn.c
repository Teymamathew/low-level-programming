#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: initiall segment where bytes re returne
 * @accept: inputs that contains only bytes
 *
 * Return: 0 always when successful
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m = 0;
	int p;

	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
			if (*s == accept[p])
			{
				m++;
				break;
			}
			else if (accept[p + 1] == '\0')
				return (m);
		}
		s++;
	}
	return (m);
}
