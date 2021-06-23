#include "holberton.h"
/**
 * times_table - prints 9 times table, starting with 0.
 *
 * Description - Does not receive any parameters
 *
 * Return: Does not return anything
 */
void times_table(void)
{
	int a = 0, b = 0, c = 0, d = 0;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (b <= 9 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (c <= 9)
					_putchar(' ');
			}
			if (c <= 9)
				_putchar(c + 48);
			else
			{
				d = c / 10;
				_putchar(d + 48);
				_putchar((c % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
