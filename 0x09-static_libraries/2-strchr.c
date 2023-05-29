#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @c: first occurrence of the character
 * @s: string parameter
 *
 * Return: 0 always when successful
 */
char *_strchr(char *s, char c)
{
	int j = 0;

	for (; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
