#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *  @n: number of character from second string
 * Return: a pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, len1, len2, slen = 0;

	for (i = 0; s1[i]; i++)
		;
	len1 = (s1) ? i : 0;
	for (i = 0; s2[i]; i++)
		;
	len2 = (s2) ? i : 0;
	if (n < len2)
		len2 = n;
	str = malloc((len1 + len2 + 1) * sizeof(char));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		str[slen++] = s1[i];
	for (i = 0; i < len2; i++)
		str[slen++] = s2[i];
	str[slen] = '\0';
	return (str);
}
