#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: memory destination
 * @src: memory area
 * @n: memory bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int k = n;

	for (; p < k; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
