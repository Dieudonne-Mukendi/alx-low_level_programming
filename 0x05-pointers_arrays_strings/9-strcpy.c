#include "holberton.h"
/**
 * _strcpy - copies the string pointed to by @src
 * to the buffer pointed to by @dest
 *
 * @src: pointer to the strings to copy
 * @dest: pointer to the destination buffer
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	do {
		*(dest + i) = *(src + i);
		i++;
	} while (*(src + i) != '\0');
	return dest;
}
