#include "main.h"
/**
 * flip_bits - Returns the number of bits to convert in the second
 * number
 * @n: first number
 * @m: second number
 * Return: the number of bytes to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned int to_ret;

	i = n ^ m;

	to_ret = 0;
	while (i > 0)
	{
		if ((i & 1) != 0)
			to_ret++;
		i = i >> 1;
	}
	return (to_ret);
}
