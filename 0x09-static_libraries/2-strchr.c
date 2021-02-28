#include "holberton.h"

/**
 * _strchr - finds a character in a string
 * @s: the string
 * @c: the character trying to find
 * Return: the character or null;
 **/
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
