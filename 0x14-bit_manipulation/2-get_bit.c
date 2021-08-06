#include "main.h"
/**
 * get_bit - Returns the value of a bit of a given index
 *@n: number to check
 *@index: the index
 *Return: the value of the bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	n >>= index;
	if ((n & 1) == 1)
		return (1);
	else
		return (0);
}
