#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: first element
 * @max: last element
 * Return: a int pointer to new array
 */
int *array_range(int min, int max)
{
	int *p;
	int len;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	p = malloc(len * sizeof(int));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	return (p);
}
