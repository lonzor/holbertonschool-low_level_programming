#include "holberton.h"

/**
 * _strstr - finds substring
 * @haystack: where the searching happens
 * @needle: what we're looking for
 * Return: null or a pointer where the subsstring is at
 **/
char *_strstr(char *haystack, char *needle)
{
	char *tmpH, *tmpN;
	char *start = haystack;

	while (*start != '\0')
	{
		tmpH = start;
		tmpN = needle;

		while (*tmpH == *tmpN && *tmpH != '\0' && *tmpN != '\0')
		{
			tmpH++;
			tmpN++;
		}
		if (*tmpN == '\0')
			return (start);
		start++;
	}
	return (0);
}
