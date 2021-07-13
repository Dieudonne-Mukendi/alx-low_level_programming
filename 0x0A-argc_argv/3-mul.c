#include "holberton.h"
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of argument
 * @argv: array of arguments
 *
 * Return: 0 if runned with success
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
}
