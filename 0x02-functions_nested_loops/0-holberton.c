#include "holberton.h"
/**
 * main - The entry point of my program
 *
 * Description: The program prints Holberton
 * followed by a new line.
 *
 * Return: Return O if there is no error in main program
 */
int main(void)
{
	int n = 0;
	char holberton[15] = "Holberton";

	while (holberton[n] != '\0')
	{
		_putchar(holberton[n]);
		n++;
	}
	_putchar('\n');

	return (0);
}
