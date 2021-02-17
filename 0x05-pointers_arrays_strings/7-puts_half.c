#include "holberton.h"

/**
 * _strlen - gets the length of string
 * @s: the string that needs the length
 * Return: int of string length
 **/
int _strlen(char *s)
{
	int num;

	for (num = 0; *s != '\0'; s++)
		num++;

	return (num);
}

/**
 * puts_half - prints half a string
 * @str: pointer
 * Return: void
 **/
void puts_half(char *str)
{
	int i;

	i = _strlen(str);
	if (i % 2 != 0)
		i++;
	i = i / 2;

	while (str[i] != '\0')
	{
		_putchar(str[i++]);
	}
	_putchar(10);
}
