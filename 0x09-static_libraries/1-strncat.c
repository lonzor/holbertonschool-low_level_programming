#include "holberton.h"

/**
 * _strncat - concatenants the strings
 * @n: number of characters
 * @dest: destination string
 * @src: source string
 * Return: the dest string
 **/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int k;

	i = k = 0;
	while (dest[i] != '\0')
		i++;
	while (src[k] != '\0' && k != n)
		dest[i++] = src[k++];
	dest[i] = '\0';
	return (dest);
}
