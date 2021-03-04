#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - mallocs assigned mem
 * @nmemb: number of spaces for memory
 * @size: size of elements in nmemb array
 * Return: pointed to new allocated space or NULL
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *mem_space;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem_space = malloc(nmemb * sizeof(int));
	if (mem_space == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		mem_space[i] = 0;
	return (mem_space);
}
