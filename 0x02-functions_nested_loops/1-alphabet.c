#include "holberton.h"
/**
 * print_alphabet - A function who print the alphabet in lowercase
 *
 * Description - Does not receive any parameters
 *
 * Return: Does not return anything
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
}
