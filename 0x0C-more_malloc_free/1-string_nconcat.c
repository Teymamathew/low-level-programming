#include "main.h"
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first memory
 * @s2: second memory
 * @n: parameter
 * Return: 0 always
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *rs;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i]; ++i)
			;
	}
	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; s2[j]; ++j)
			;
	}
	if (j > n)
		j = n;
	rs = malloc(sizeof(char) * (i + j + 1));
	if (rs == NULL)
		return (NULL);
	for (k = 0; k < j; k++)
		rs[k] = s1[k];
	for (k = 0; k < j; k++)
		rs[k + i] = s2[k];
	rs[i + j] = '\0';
	return (rs);
}
