#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * strtow - splits a string to words
 * @str: string to split *
 * Return: a point to an array of strings or NULL
 */
char **strtow(char *str)
{
	char **arr_words = NULL;
	int i, j, maxlen, wlen = 0, slen, words = 0, sig = 0, pre_sig = 0;

	if (str == NULL || str == '')
		return (NULL);
	slen = strlen(str);
	for (i = 0; i < slen; i++)
	{
		sig = (str[i] == 32 || str[i] == '\t') ? 0 : 1;
		words = (pre_sig == 0 && sig == 1) ? words + 1 : words;
		if (wlen > 0 && sig == 0)
			maxlen = (wlen > maxlen) ? wlen : maxlen;
		wlen = (sig) ? wlen + 1 : 0;
		pre_sig = sig;
	}
	if (words == 0)
		return (NULL);
	arr_words = (char **)malloc(words * sizeof(char *));
	if (arr_words == NULL)
	{
		free(arr_words);
		return (NULL);
	}
	for (i = 0; i < words; i++)
	{
		arr_words[i] = (char *)malloc((maxlen + 1) * sizeof(char));
		if (arr_words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr_words[j]);
			free(arr_words);
			return (NULL);
		}
	}
	wlen = 0;
	words = 0;
	for (i = 0; i < slen; i++)
	{
		sig = (str[i] == 32 || str[i] == 9) ? 0 : 1;
		words = (pre_sig == 0 && sig == 1) ? words + 1 : words;
		if (sig)
			arr_words[words][wlen] = str[i];
		wlen = (sig) ? wlen + 1 : 0;
		pre_sig = sig;
	}
	return (arr_words);
}
