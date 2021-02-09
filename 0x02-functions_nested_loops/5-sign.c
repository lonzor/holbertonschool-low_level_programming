#include "holberton.h"

/**
 * print_sign - returns the "sign" a number has -, +, or 0
 * @n: the numbert that is being check
 * Return: 1 if positive, -1 if negative, and 0 if the number is zero
 **/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
