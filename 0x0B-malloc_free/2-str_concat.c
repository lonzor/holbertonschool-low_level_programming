#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * *str_concat - concatenates strings
 * @s1: string
 * @s2: another string
 * Return: pointer to string or null if fails
 **/
char *str_concat(char *s1, char *s2)
{
	char *dup;
	int i;
	int k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = k = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[k] != '\0')
	{
		k++;
	}
	dup = malloc(sizeof(char) * (i + k + 1));
	if (dup == NULL)
		return (NULL);
	i = k = 0;
	while (s1[i] != '\0')
	{
		dup[i] = s1[i];
		i++;
	}
	while (s2[k] != '\0')
	{
		dup[i] = s2[k];
		i++;
		k++;
	}
	dup[i] = '\0';
	return (dup);
}
