#include "holberton.h"
/**
 * main - entry point
 * @argc: number of argument
 * @argv: array of arguments
 *
 * Return: 0 if runned with success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
