#include "holberton.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: size
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		P = malloc(98);
		return (p);
	}
	return (p);
}
