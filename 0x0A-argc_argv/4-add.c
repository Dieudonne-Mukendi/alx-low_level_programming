#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * main - entry point
 * @argc: number of argument
 * @argv: array of arguments
 *
 * Return: 0 if runned with success
 */
int main(int argc, char *argv[])
{
	int sum = 0, i = 1, k = 0, l = 0;
	char j;

	for (; i < argc; i++)
	{
		l = strlen(argv[i]);
		k = 0;
		while (k < l)
		{
			j = argv[i][k];
			if (j < '0' || j > '9')
			{
				printf("Error\n");
				return (1);
			}
			k++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
