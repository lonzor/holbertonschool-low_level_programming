#include "holberton.h"

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

/**
 * *_strcpy - copies strings
 * @dest: destination
 * @src: source
 * Return: pointer
 **/
char *_strcpy(char *dest, char *src)
{
	int i;
	int k = _strlen(src);

	for (i = 0; i <= k; i++)
		dest[i] = src[i];
	return (dest);
}
