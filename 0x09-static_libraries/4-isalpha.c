#include "holberton.h"

/**
 * _isalpha - check if it is a letter
 *
 * @c: int for letter
 *
 * Return: 1 if a letter and 0 if not
 **/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
