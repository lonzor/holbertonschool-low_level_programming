#include "holberton.h"

/**
 * find_root - looks for square root
 * @n: the number getting square root of
 * @r: the potential square root
 * Return: square root or -1
 **/
int find_root(int r, int n)
{
	if (r * r > n)
		return (-1);
	if (r * r == n)
		return (r);
	return (find_root(r + 1, n));
}

/**
 * _sqrt_recursion - returns natural square root
 * @n: number we need the square root from
 * Return: natural square root or -1
 **/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_root(0, n));
}
