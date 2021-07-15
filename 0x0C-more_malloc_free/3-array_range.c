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
	int len, i = 0;

	if (min > max)
		return (NULL);
	len = max - min;
	p = malloc((len + 1) * sizeof(int));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i <= len; min++, i++)
		p[i] = min;
	return (p);
}
