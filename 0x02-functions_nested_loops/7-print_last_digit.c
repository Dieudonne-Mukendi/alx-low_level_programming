#include <limits.h>
#include "holberton.h"
/**
 * print_last_digit - A function that prints the last digit of a number *
 * @n: is the number to print the last digit *
 * Return: the last digit of @n
 */
int print_last_digit(int n)
{
	int x = 0, y = 0,  a = (n % 10) + 48;

	if (n >= 10)
	{
		_putchar(a);
		return (n % 10);
	}
	else if (n == INT_MIN)
	{
		x = 8;
		y = 8 + 48;
		_putchar(y);
		return (x);
	}
	else if (n > 0 && n < 10)
	{
		x = n + 48;
		_putchar(x);
		return (n);
	}
	else if (n < 0)
	{
		x = abs(n);
		if (x >= 10)
		{
			a = x % 10;
			y = a + 48;
			_putchar(y);
			return (a);
		}
		else
		{
			a = x + 48;
			_putchar(a);
			return (x);
		}
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
