#include "holberton.h"

/**
 * _strlen_rec - recursively finds length of string
 * @str: the string getting the length from
 * Return: length of string
 **/
int _strlen_rec(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen_rec(str + 1));
}

/**
 * check_pal - checks if string is palindrome
 * @first: the point at the first letter
 * @last: the point at the last letter
 * @pal: the string that could be a plaindrome
 * Return: 1 if true and 0 if not
 **/
int check_pal(int first, int last, char *pal)
{
	if (first >= last)
		return (1);
	else if (pal[first] != pal[last])
		return (0);
	else
		return (check_pal(first + 1, last - 1, pal));
}

/**
 * is_palindrome - prints if something is palindrome or not
 * @s: string
 * Return: 1 if string is palindrome and 0 if not
 **/
int is_palindrome(char *s)
{
	int i;

	i = _strlen_rec(s) - 1;
	return (check_pal(0, i, s));
}
