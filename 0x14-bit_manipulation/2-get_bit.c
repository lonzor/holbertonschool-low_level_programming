#include "holberton.h"

/**
 * get_bit - gets value of a bit at a certain index
 * @n: number given
 * @index: where the bit will be value'd
 * Return: the value of bit
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8) - 1)
		return (-1);
	return (n >> index & 1);
}
