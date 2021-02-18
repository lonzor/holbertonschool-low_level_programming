#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * @Return: concatenated strings
 **/

char *_strcat(char *dest, char *src)
{
	char* str_ret = dest;

	if ((dest != '\0') && (src != '\0'))
	{
		while (*dest != '\0')
		{
			dest++;
		}
		while (*src != '\0')
		{
			*dest++ = *src++;
		}
		*dest = '\0';
	}
	return (str_ret);
}
