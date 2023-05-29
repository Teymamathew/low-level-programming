#include "main.h"
#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory
 * block using malloc and free
 * @ptr: pointer
 * @old_size: is the size, in bytes, of
 * the allocated space for ptr
 * @new_size: is the size, in bytes, of
 * the new memory block
 * Return: Nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *r;
	char *rs;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

	r = malloc(new_size);
	if (!r)
		return (NULL);

	rs = r;
	if (new_size < old_size)
	{
		for (j = 0; j < new_size; j++)
			r[j] = rs[j];
	}
	free(ptr);
	return (r);
}
