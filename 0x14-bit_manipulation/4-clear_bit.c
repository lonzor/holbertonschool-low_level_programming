#include "holberton.h"

/**
 * clear_bit - ses value of bit to 0 at an index
 * @n: number given
 * @index: index where to clear the bit
 * Return: 1 if successful or -1 if failure
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8) - 1)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
