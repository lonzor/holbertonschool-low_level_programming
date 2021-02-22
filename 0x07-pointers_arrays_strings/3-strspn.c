#include "holberton.h"

/**
 * _strspn - gets length
 * @s: string
 * @accept: the string being comparted
 * Return: number of bytes in s
 **/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, k;

	for (i = 0; s[i]; i++)
	{
		for (k = 0; accept[k]; k++)
		{
			if (s[i] == accept[k])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
