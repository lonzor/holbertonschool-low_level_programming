#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - copies a string and returns a pointer
 * @str: string that will be copied
 * Return: NULL or a pointer
 **/
char *_strdup(char *str)
{
	int i = 1;
	int k = 0;
	char *dup;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	dup = malloc((sizeof(char) * i) + 1);
	if (dup == NULL)
		return (NULL);
	while (k < i)
	{
		dup[k] = str[k];
		k++;
	}

	dup[k] = '\0';
	return (dup);
}
