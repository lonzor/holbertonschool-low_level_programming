#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array
 * @array: pointer to first element in array
 * @size: how many elements that are in the array
 * @value: what is being searched for
 * Return: idx where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t prev;
	size_t next;
	size_t curr;

	if (array == NULL || size == 0)
		return (-1);

	prev = 0;
	next = size - 1;
	print_arr(array, prev, size);

	while (prev < next)
	{
		curr = (prev + next) / 2;
		if (array[curr] < value)
		{
			prev = curr + 1;
			print_arr(array, prev, size);
		}
		else if (array[curr] > value)
		{
			next = curr;
			print_arr(array, prev, next + 1);
		}
		else
			return (curr);
	}
	return (-1);
}

/**
 * print_arr - prints array of ints
 * @array: array that is being printed
 * @position: idx to starting printing
 * @size: number of elements in array
 */
void print_arr(int *array, size_t position, size_t size)
{
	size_t idx;

	printf("Searching in array: ");

	idx = position;
	while (array && idx < size)
	{
		if (idx > position)
			printf(", ");
		printf("%d", array[idx]);
		++idx;
	}
	printf("\n");
}
