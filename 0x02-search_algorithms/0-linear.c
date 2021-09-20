#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of ints
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: what is being searched for
 * Return: first index where value is at
 */

int linear_search(int *array, size_t size, int value)
{
	size_t pos;

	if (array == NULL)
		return (-1);
	for (pos = 0; pos < size; pos++)
	{
		printf("Value checked array[%d] = [%d]\n",
			(int)pos, array[pos]);
		if (array[pos] == value)
			return (pos);
	}
	return (-1);
}
