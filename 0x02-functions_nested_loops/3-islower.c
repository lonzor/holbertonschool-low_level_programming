#include "holberton.h"

/**
 * _islower - checks lowercase letter
 *
 * Return: 1 if lowercase and 0 if it isn't
 **/
int _islower(int c)
{
	if (c >= 'a' && <= 'z')
		return (1);
	else
		return (0);
}
