#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of two diagonals
 * @a: matrix
 * @size: size
 * Return: nothing
 **/
void print_diagsums(int *a, int size)
{
	int i;
	int dSum1 = 0;
	int dSum2 = 0;

	for (i = 0; i < size; i++)
	{
		dSum1 = dSum1 + a[(size + 1) * i];
		dSum2 = dSum2 + a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", dSum1, dSum2);
}
