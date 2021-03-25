#include "holberton.h"

/**
 * binary_to_uint - converts binary into unsigned int
 * @b: pointer to a string of zeros and ones
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0;
	int index;

	if (b == NULL)
		return (0);
	for (index = 0; b[index]; index++)
	{
		if (b[index] < '0' || b[index] > '1')
			return (0);
		converted = (converted * 2) + (b[index] - '0');
	}
	return (converted);
}
