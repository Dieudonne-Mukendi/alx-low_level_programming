#include "holberton.h"
/**
 * puts2 - prints every other character then a new line.
 * @str: string to print
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;
	char *p = str;

	while (str[i] != '\0')
	{
		if (!(i % 2) || i == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
