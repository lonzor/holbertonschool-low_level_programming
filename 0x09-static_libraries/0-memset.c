#include "holberton.h"

/**
 * _memset - Fills the first n bytes of the memory
 * @s: pointer to where bytes are filled
 * @b: bytes of memory
 * @n: amount of bytes that will be filled
 * Return: memory area of s
 **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
