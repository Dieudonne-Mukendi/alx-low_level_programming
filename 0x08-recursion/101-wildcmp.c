#include "holberton.h"
/**
 * wildcmp - checks if s1 and s2 matches
 * @s1: string to check
 * @s2: string to matches
 * Return: 1 if matches otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*s1 == '\0' || *(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		else if (wildcmp(s1, s2 + 1))
			return (wildcmp(s1, s2 + 1));
		return (wildcmp(s1 + 1, s2));
	}
	else if (*s2 == '\0')
		return (*s1 == '\0');
	return (*s1 == *s2 && wildcmp(s1 + 1, s2 + 1));
}
