#include "holberton.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: the address of the memory to fill
 * @b: the constant byte to fill
 * @n: number of bytes to fill
 *
 * Return: a pointer to the address of the filled memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
