#include "holberton.h"

/**
 * _pow_recursion - Returns x to the power of y
 * @x: intial value
 * @y: the power x is raised to
 * Return: x raised to the power of y
 **/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, --y));
}
