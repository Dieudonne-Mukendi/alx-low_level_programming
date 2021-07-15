#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - returns the lenght of a string
 *@s: poiter of character
 *Return: the length of a string
 */
int _strlen(char *s)
{
	unsigned int len;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	return (len);
}
/**
 * *string_nconcat - concatenates two strings
 *@s1: first string to concatenate
 *@s2: second string to concatenate
 *@n: number of bytes to concatenate
 *Return: the pointer concatenate or null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, i, j;
	char *str;

	/**verify if s1 or s2 is null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/**calculate the lenght of the strings*/
	l1 = _strlen(s1);

	/**asign the memorty to the pointer*/
	str = malloc((l1 + (n * sizeof(*s2) + 1)) * sizeof(*str));

	/**Verify if the memory is avaiable*/
	if (str == NULL)
		return (NULL);

	/**Concatenate the string*/
	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0' && j < n; j++, i++)
	{
		str[i] = s2[j];
	}
	str[i] = '\0';
	return (str);
}
