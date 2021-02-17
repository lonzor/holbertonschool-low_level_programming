#include "holberton.h"

/**
 * rev_string - returns a string reversed
 * @s: the string being used
 * Return: void
 **/
void rev_string(char *s)
{
	int i;
	int length;
	char first;
	char last;

	length = _strlen(s) - 1;
	i = 0;
	while (i < length)
	{
		first = s[i];
		last  = s[length];
		s[i++];
		s[length--] = first;
	}
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
