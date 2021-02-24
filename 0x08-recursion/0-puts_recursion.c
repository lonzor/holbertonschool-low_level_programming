#include "holberton.h"

/**
 * _puts_recursion - prints a string then a new line
 * @s: string that gets printed
 * Return: nothing
 **/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
