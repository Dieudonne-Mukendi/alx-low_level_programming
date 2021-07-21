#include "3-calc.h"
/**
 * main -  program that performs simple operations.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if success otherwise exit with error number
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	p = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' && argv[3][0] == '0') ||
	    (argv[2][0] == '%' && argv[3][0] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", p(a, b));
	return (0);
}
