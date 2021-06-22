#include <stdlib.h>
#include "holberton.h"
/**
 * print_last_digit - A function that prints the last digit of a number
 *
 * @n: is the number to print the last digit
 *
 * Return: the last digit of @n
 */
int print_last_digit(int n)
{
	int a = (n % 10) + 48;

	_putchar(a);

	return (a);
}
