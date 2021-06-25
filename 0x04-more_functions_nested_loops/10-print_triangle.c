#include "holberton.h"
/**
 * print_triangle - A function who print a triangle
 *
 * @size: size of a triangle
 *
 * Return: Does not return anything
 */
void print_triangle(int size)
{
	int i, j;
	int n = size;

	if (n > 0)
	{
		for (j = n; j > 0; j--)
		{
			for (i = j - 1; i < 0; i--)
			{
				_putchar(' ');
			}
			i = 0;
			for (i = (n - j) + 1; i > 0; i--)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
