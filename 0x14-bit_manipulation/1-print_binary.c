#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 *@n: number to convert
 *Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int i, c = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar('1');
		return;
	}

	i = 2;

	while (i <= n && c < 62)
	{
		i <<= 1;
		c++;
	}

	if (c != 62)
		i >>= 1;

	while (i != 0)
	{
		if ((i & n) != 0)
		{
			c++;
			_putchar('1');
		}
		else
		{
			c++;
			_putchar('0');
		}
		i >>= 1;
	}
}
