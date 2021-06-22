#include <stdlib.h>
#include <limits.h>
#include "holberton.h"
/**
 * print_last_digit - A function that prints the last digit of a number *
 * @n: is the number to print the last digit *
 * Return: the last digit of @n
 */
int print_last_digit(int n)
{
	int x = 0, y = 0,  a = 0;

	if (n < 0 && n != INT_MIN)
	{
		n = abs(n);
	}
	a = (n % 10) + 48;
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
	else
	{
		_putchar(48);
		return (0);
	}
}
