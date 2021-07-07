#include "holberton.h"
/**
 * _print_rev - prints a string in reverse
 * @s: string to print
 *
 * Return: nothing
 */
void _print_rev(char *s)
{
	if (*s)
	{
		_print_rev(++s);
		_putchar(*s);
	}
}

/**
 * _print_rev_recursion - prints string in reverse
 * followed by a new line
 * @s: string to print
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	_print_rev(s);
	_putchar('\n');
}
