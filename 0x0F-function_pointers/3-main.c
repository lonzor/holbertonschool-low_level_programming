#include "3-calc.h"

/**
 * main - recieves args
 * @argc: count number of arg
 * @argv: array of args
 * Return: result
 **/
int main(int argc, char *argv[])
{
	int x;
	int y;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	if ((*argv[2] == '%' || *argv[2] == '/') && y == 0)
	{
		printf("Error\n");
		exit(100);
	}

	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", f(x, y));
	return (0);
}
