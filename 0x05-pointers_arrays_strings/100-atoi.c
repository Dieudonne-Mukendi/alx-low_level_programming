#include "holberton.h"
/**
 * _atoi - convert a string to an integer.
 * @s: string to convert
 * Return: the converted value in int
 */
int _atoi(char *s)
{
	int num = 0, signe = 0, count = 0, length = 0;

	while (s[length] != '\0')
		length++;
	for (count = 0; count < length; count++)
	{
		if ((s[count] == '-' || s[count] == '+') ||
			s[count] == ' ')
		{
			if (s[count] == '-')
				signe += 1;
		}
		else
			break;
	}
	for (count = 0; count < length; count++)
	{
		if (s[count] >= '0' && s[count] <= '9')
		{
			if (num == 0)
				num = s[count] - '0';
			else
				num = num * 10 + (s[count] - '0');
		}
		else
			return (0);
	}
	if (signe % 2)
		num = -num;
	return (num);
}
