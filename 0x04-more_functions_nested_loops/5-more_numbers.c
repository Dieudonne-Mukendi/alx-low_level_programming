#include "holberton.h"
/**
 * more_numbers - A function who print 10 times the numbers, from 0 to 14
 *
 * Description - Does not receive any parameters
 *
 * Return: Does not return anything
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 48; i < 63; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
