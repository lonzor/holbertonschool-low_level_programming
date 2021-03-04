#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate memory with malloc
 * @b: size of memory to be malloc'd
 * Return: pointer to malloc'd memory
 **/
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
