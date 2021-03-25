#include "holberton.h"

/**
 * set_bit - sets the bit value to one at a given index
 * @n: the number given
 * @index: the given index
 * Return: 1 if success or -1 if failure
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8) - 1)
		return (-1);
	*n = *n | 1 << index;
	return (1);
}
