#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints the array
 * @a: array
 * @n: how many elements that are in the array
 * Return: void
 **/
void print_arrayyyy(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
