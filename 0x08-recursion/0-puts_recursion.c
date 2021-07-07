#include "holberton.h"
/**
 * _puts_recursion - prints character by character recursively
 *@s: string to print
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	_putchar('\n');
}
