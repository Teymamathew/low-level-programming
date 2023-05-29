#include "dog.h"
#include <stdlib.h>
/**
 * _length - function that checks string
 * @str: string parameter
 * Return: 0 always.
 */
int _length(char *str)
{
	int j;

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	return (j);
}

/**
 * _strcy - function that points strings from sc
 * @plc: placeholder
 * @s: parameter
 * Return: the pointer to plc
 */
char *_strcy(char *plc, char *s)
{
	int weight, j;

	weight = 0;

	while (s[weight] != '\0')
	{
		weight++;
	}
	for (j = 0; j < weight; j++)
	{
		plc[j] = s[j];
	}
	plc[j] = '\0';

	return (plc);
}
/**
 * new_dog -  a function that creates a new dog.
 * @name: parameter name
 * @age: parameter age
 * @owner: new dog owner
 * Return: o always.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int wen1, wen2;

	wen1 = _length(name);
	wen2 = _length(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (wen1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (wen2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcy(dog->name, name);
	_strcy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
