#include "main.h"
#include <stdlib.h>
/**
 * argstostr - a function that concatenates
 * all the arguments of your program.
 * @ac: argument
 * @av: second input argument
 * Return: a pointer to a new string
 * or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *r, *s;
	int j, k, l, mes = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		s = av[j];
		k = 0;

		while (s[j++])
			mes++;
		mes++;
	}

	r = (char *)malloc(sizeof(char) * (mes + 1));
	if (r == NULL)
		return (NULL);

	for (j = 0, k = 0; j < ac && k < mes; j++)
	{
		s = av[j];
		l = 0;

		while (s[l])
		{
			r[k] = s[l];
			l++;
			k++;
		}
		r[k++] = '\n';
	}
	r[k] = '\0';
	return (r);
}
