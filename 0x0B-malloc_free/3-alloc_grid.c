#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - creates and returns a pointer to 2D array of
 * integers
 * @width: rows
 * @height: columns
 * Return: a pointer to 2D array or NULL
 */
int **alloc_grid(int width, int height)
{
	int c = width, r = height, i, j;
	int **arr;

	if (r <= 0 || c <= 0)
		return (NULL);
	arr = (int **)malloc(r * sizeof(int *));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < r; i++)
	{
		arr[i] = (int *)malloc(c * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i <  r; i++)
		for (j = 0; j < c; j++)
			arr[i][j] = 0;
	return (arr);
}
