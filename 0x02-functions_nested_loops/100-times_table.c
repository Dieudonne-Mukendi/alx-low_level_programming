#include <stdio.h>
#include "holberton.h"
/**
 * print_times_table - prints the n times table starting from 0
 *
 * @n: is the times table number
 *
 * return: nothing
 */
void print_times_table (int n)
{
	int i, j, a;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				a = j * i;
				if (j != 0 && a < 10)
					printf("  ");
				if ((j != 0 && a >= 10) && a < 100)
					printf(" ");
				printf("%d", a);
				if (j != n)
					printf(", ");
			}
			putchar('\n');
		}
	}
}
