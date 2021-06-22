#include <ctype.h>
#include "holberton.h"
/**
 * _isalpha - A function that checks for alphabetic character.
 *
 * @c: is the character to  check
 *
 * Return: 1 if @c is alphabetic otherwise 0
 */
int _isalpha(int c)
{
	int a = isalpha(c);

	if (a == 0)
		return (a);
	else
		return (1);
}
