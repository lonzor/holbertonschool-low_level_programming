#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Re-allocate memo
 * @ptr: pointer to old mem
 * @old_size: old size of mem
 * @new_size: new size of mem
 * Return: Pointer to new mem
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *space;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	space = malloc(new_size);
	if (space == NULL)
		return (NULL);
	free(ptr);
	return (space);
}
