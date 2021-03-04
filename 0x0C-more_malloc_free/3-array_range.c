#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates array of ints
 * @min: start int
 * @max: final int
 * Return: pointer to malloc'd array or NULL
 **/
int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
		return (NULL);
	a = malloc((max - min + 1) * sizeof(*a));
	if (a == NULL)
		return (NULL);
	for (i = 0; min < max + 1; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
