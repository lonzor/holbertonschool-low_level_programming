#include "holberton.h"

/**
 * reverse_array - reverses array
 * @a: an array
 * @n: number of elements in array
 * Return: void
 **/
void reverse_array(int *a, int n)
{
	int i, first, last;

	i = 0;
	n = n - 1;
	while (i < n)
	{
		first = a[i];
		last = a[n];
		a[i++] = last;
		a[n--] = first;
	}
}
