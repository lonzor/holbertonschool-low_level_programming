#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array given to us
 * @size: size of the array
 * @cmp: pointer given to function used to compare
 * Return: -1 if no element matches or less than zero
 * the first element if it finds a match
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(*array) == 1)
			return (a);
		array++;
	}
	return (-1);
}
