#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * create_array - creates an array of chars, and init with a specific char.
 * @size: size of array
 * @c: char to fill array
 * Return: pointer to array, or NULL if failes
 **/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(size);
	if (array == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
