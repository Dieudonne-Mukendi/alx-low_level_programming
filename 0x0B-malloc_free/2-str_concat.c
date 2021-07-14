#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: a pointer to the new string or null if fails
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, len1, len2;
	char *arr = NULL;

	len1 = (s1) ? strlen(s1) : 0;
	len2 = (s2) ? strlen(s2) : 0;
	arr = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (arr == NULL)
		return (arr);
	for (i = 0; i < len1; i++)
		arr[i] = s1[i];
	for (; i < len2 + len1; i++)
		arr[i] = s2[i - len1];
	return (arr);
}
