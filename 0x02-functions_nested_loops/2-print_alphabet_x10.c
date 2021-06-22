#include "holberton.h"
/**
 * print_alphabet_x10 - A function who print the alphabet in lowercase
 * 10 times followed by a new line.
 *
 * Description - Does not receive any parameters
 *
 * Return: Does not return anything
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
