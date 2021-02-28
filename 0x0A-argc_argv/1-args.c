#include <stdio.h>

/**
 * main - prints num of args
 * @argc: arg count
 * @argv: arg array
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
