#include "holberton.h"

/**
 * _strlen_recursion - gets length of string
 * @s: the string
 * Return: the length of string in an int
 **/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++
	return (_strlen_recursion(s) + 1);
}
