#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - writes the character c to stdout
 * @ptr: The character to print
 * @old_size: asaas
 * @new_size: dwd
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (!new_ptr)
		return (NULL);

	if (!ptr)
	{
		return (new_ptr);
	}

	new_ptr = memcpy(new_ptr, ptr, old_size);
	free(ptr);

	return (new_ptr);
}
