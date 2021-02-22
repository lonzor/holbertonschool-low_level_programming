#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @dest: destination location for memory
 * @src: source location for memory
 * @n: amount of bytes
 * Return: pointer to destination
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
