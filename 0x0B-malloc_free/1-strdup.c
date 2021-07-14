#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - copies a given string, and returns a pointer
 * to the copy
 * @str: string to copy
 * Return: a pointer to the new string or null if fails
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *arr;

	if (str != NULL)
	{
		j = strlen(str);
		arr = (char *)malloc((j + 1) * sizeof(char));
	}
	if (str == NULL || arr == NULL)
	{
		arr = NULL;
		return (NULL);
	}
	for (i = 0; i < j; i++)
		arr[i] = str[i];
	return (arr);
}
