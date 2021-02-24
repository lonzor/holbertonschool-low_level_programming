#include "holberton.h"

/**
 * factorial - gets factorial of a number
 * @n: number we want the factorial from
 * Return: the factorial of n
 **/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
