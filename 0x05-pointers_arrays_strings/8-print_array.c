#include <stdio.h>
#include "holberton.h"
/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: the pointer to an array
 * @n: the number of elements to be printed
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (!(i == (n - 1)))
			printf(", ");
		i++;
	}
	_putchar('\n');
}
