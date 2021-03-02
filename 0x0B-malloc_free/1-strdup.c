#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - copies a string and returns a pointer
 * @str: string that will be copied
 * Return: NULL or a pointer
 **/
char *_strdup(char *str)
{
	int i;
	int l;
	char *dup;

	if (str == NULL)
		return (NULL);
	for(i = 0; str[i] != '\0'; i++)
	i++;
	dup = malloc(sizeof(*str) * i);
	if (dup == NULL)
		return (NULL);
	l = 0;
	while (str[l] != '\0')
	{
		dup[l] = str[l];
		l++;
	}
	return (dup);
}
