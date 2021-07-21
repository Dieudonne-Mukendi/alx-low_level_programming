#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - number of bytes
 *@argc: argument counter
 *@argv: argument vector
 *Return: 0
 **/

int main(int argc, char *argv[])
{
	int byte;

	if (argc < 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	return (0);
}
