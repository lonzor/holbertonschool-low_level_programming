#include "holberton.h"

/**
 * int _isupper(int c) - looks to see if letter is uppercase
 * @c: int that represents a letter
 * Return: 1 if c is upper case, and 0 if not
 **/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
