#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: tnumber of the elements
 * @size: the size of the element
 *
 * Return: a void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * (sizeof(size) * size));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(p + i) = 0;
	return (p);
}
