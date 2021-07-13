#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - create an array of chars, and initializes it
 * with a specific char.
 * @size: size of the array
 * @c: specific char
 * Return: a pointer to the array or null if fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr = (char *)malloc(size * sizeof(c));
	unsigned int i;

	if (size == 0 || arr == NULL)
	{
		arr = NULL;
		return (arr);
	}
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
