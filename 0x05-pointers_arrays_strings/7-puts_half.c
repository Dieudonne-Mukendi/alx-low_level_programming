#include <string.h>
#include "holberton.h"
/**
 * puts_half - prints half of a string, and new line
 * @str: the string to print
 * Return: nothing
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int i = length / 2;
	int m = 0;
	int n = length % 2;

	for (m = i + n; m < length; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
