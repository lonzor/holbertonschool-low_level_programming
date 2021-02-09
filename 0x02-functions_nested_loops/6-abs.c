#include "holberton.h"

/**
 * _abs - finds absolute value
 * @n: int absolute value
 * Return: absolute value
 **/
int _abs(int n)
{
	if (n <= 0)
		return (n - (n * 2));
	else
		return (n);
}
