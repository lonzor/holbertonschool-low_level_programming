#include "holberton.h"

/**
 * _isdigit - check to see if the int c is a number
 * @c: int to check if it is a digit
 * Return: 1 if its a digit and 0 if not
 **/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
