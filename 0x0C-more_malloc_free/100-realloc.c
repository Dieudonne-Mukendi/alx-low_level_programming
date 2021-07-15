#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_memcpy - copies memory area
 *@dest: destination to copy
 *@src: source pointer
 *@n: number of bytes to coppy
 *Return: dest (destination)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * *_realloc - reallocate a memory block using malloc and free
 *@ptr: ponter to realloc
 *@old_size: old size of the memory
 *@new_size: new size of the memory
 *Return: pointer reallocared or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *rp;
	unsigned int i;

	if (ptr == NULL)
	{
		rp = malloc(new_size);
		if (rp == NULL)
		{
			free(ptr);
			return (NULL);
		}
		free(ptr);
		return (rp);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	rp = malloc(new_size);

	if (rp == NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
		_memcpy(rp, ptr, old_size);
	free(ptr);

	return (rp);
}
