#include "holberton.h"
/**
 * more_numbers - A function who print the numbers, from 0 to 14
 *
 * Description - Does not receive any parameters
 *
 * Return: Does not return anything
 */
void more_numbers(void)
{
	int i;

	for (i = 48; i < 63; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
