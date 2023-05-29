#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: first parameter
 * @s2: second parameter
 * Return: 0 always
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	j = k = 0;
	while (s1[j] != '\0')
		j++;
	while (s2[k] != '\0')
		k++;
	result = malloc(sizeof(char) * (j + k + 2));

	if (result == NULL)
		return (NULL);
	j = k = 0;
	while (s1[j] != '\0')
	{
		result[j] = s1[j];
		j++;
	}
	while (s2[k] != '\0')
	{
		result[j] = s2[k];
		j++, k++;
	}
	result[j] = '\0';
	return (result);
}
