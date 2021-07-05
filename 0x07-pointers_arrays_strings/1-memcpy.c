#include "holberton.h"
/**
 * _memcpy - copies memory erea.
 * @dest: address of the destination
 * @src: address of the source
 * @n: number of byte to copy
 *
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
