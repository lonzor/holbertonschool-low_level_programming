#include "holberton.h"

/**
 * _puts - prints to stdout
 * @str: the string that prints
 * Return: void
 **/
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
