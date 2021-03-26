#include "holberton.h"

/**
 * flip_bits - returns # of bits needed to flip to from one # to another
 * @n: number given
 * @m: other number given
 * Return: # of bits between n and m
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int counter;
	unsigned long int excl;

	excl = n ^ m;
	counter = 0;
	while (excl)
	{
		counter = counter + (excl & 1);
		excl = excl >> 1;
	}
	return (counter);
}
