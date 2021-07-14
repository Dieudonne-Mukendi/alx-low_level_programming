#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments of the
 * program
 * @ac: number of arguments
 * @av: double pointer to the arguments
 * Return: a string with all arguments
 */
char *argstostr(int ac, char **av)
{
	char *str = NULL;
	int i = 0, j = 0, len = ac, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; i < ac; i++)
		len += strlen(av[i]);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		for (j = 0; j < len; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	return (str);
}
