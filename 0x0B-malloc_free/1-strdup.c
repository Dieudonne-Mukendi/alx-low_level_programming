#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - copies a given string, and returns a pointer
 * to the copy
 * @str: string to copy
 * Return: a pointer to the new string or null if fails
 */
char *_strdup(char *str)
{
	unsigned int i, j = strlen(str);
	char *arr = (char *)malloc(j * sizeof(char));

	if (str == NULL || arr == NULL)
	{
		arr = NULL;
		return (arr);
	}
	for (i = 0; i < j; i++)
		arr[i] = str[i];
	return (arr);
}
