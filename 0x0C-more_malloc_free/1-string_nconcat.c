#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

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
 * strint_nconcat - concats two strings using n chars
 * @s1: first string
 * @s2: second string
 * @n: number of chars for s2 to use
 * Return: pointer to new string or NULL
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if ((int) n > _strlen(s2))
		n = _strlen(s2);

	concat = malloc(_strlen(s1) + n + 1);
	if (concat == NULL)
		return (NULL);
	for (i = 0, k = 0; s1[i] != '\0'; i++, k++)
		concat[k] = s1[i];
	for (i = 0; i != n; i++, k++)
		concat[k] = s2[i];
	concat[k] = '\0';
	return (concat);
}
