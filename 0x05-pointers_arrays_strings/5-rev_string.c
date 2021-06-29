#include "holberton.h"
/**
 * rev_string - reverses a string.
 * @s: string to reverse
 * Return: nothing
 */
void rev_string(char *s)
{
	int length;

	while (s[length] != 0)
	{
		length++;
	}
	char sr[length];
	int i = length - 1;
	int j = 0;
	int *p = s;

	while (j < length)
	{
		sr[j] = s[i];
		j++;
		i--;
	}
	for (i = 0; i < length; i++)
	{
		*p = sr[i];
		p++;
	}
}
