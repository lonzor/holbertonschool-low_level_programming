#include "holberton.h"
/**
 * print_binary - prints the binary version of a number
 * @n: the number given to make binary
 * Return: nothing
 **/
void print_binary(unsigned long int n)
{
	int size_bits;
	int count;

	size_bits = (sizeof(n) * 8) - 1;
	if (n == 0)
		_putchar('0');
	count = 0;
	while (size_bits >= 0)
	{
		if (n >> size_bits & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
		size_bits--;
	}
}
