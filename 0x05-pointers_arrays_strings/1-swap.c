#include "holberton.h"

/**
 * swap_int - swaps the values
 * @a: int
 * @b: another int
 * Return: nothing
 **/
void swap_int(int *a, int *b)
{
	int swap = *b;

	*b = *a;
	*a = swap;
}
