#include "holberton.h"

/**
 * puts2 - prints every other character
 * @str: string that will be printed
 * Return: void
 **/
void puts2(char *str)
{
	int i;

	i = 0;
	while (i < _strlen(str))
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}

/**
 * _strlen - returns string length
 * @s: string
 * Return: nothing
 **/
int _strlen(char *s)
{
	int num;

	for (num = 0; *s != '\0'; s++)
		num++;

	return (num);
}
