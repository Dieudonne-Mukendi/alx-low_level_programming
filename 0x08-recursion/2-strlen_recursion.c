#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to check the length
 *
 * Return: the length of the string as int
 */
int _strlen_recursion(char *s)
{
	int len = 1;

	if (*s)
	{
		len += _strlen_recursion(s + 1);
		return (len);
	}
	else
	{
		len = 0;
		return (len);
	}
}
