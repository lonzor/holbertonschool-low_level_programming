#include <stdio.h>

/**
 * main - print revers alphabet
 *
 * Return: Zero(0)
 **/
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);
}
