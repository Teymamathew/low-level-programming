#include "main.h"
/**
 * _strstr - funtion that locates a substring
 * @needle: substring
 * @haystack: string
 * Return: 0 always when succesaful
 */
char *_strstr(char *haystack, char *needle)
{
	int j;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		j = 0;

		if (haystack[j] == needle[j])
		{
			do {
				if (needle[j + 1] == '\0')
					return (haystack);

				j++;
			} while (haystack[j] == needle[j]);
		}
		haystack++;
	}
	return ('\0');
}
