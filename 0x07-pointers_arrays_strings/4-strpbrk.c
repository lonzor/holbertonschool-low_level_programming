#include "holberton.h"

/**
 * _strpbrk - searches for a substring
 * @s: the string being checked
 * @accept: string being checked against s
 * Return: null or pointer to the bytes of s
 **/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, k;

	for (i = 0; s[i]; i++)
	{
		for (k = 0; accept[k]; k++)
		{
			if (s[i] == accept[k])
				break;
		}
		if (accept[k])
			return (s + i);
	}
	return (0);
}
