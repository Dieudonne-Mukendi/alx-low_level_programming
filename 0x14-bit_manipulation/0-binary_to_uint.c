#include "main.h"
/**
 * binary_to_uint - converts a string binary to an unsigned int
 *@b: string of the binary number
 *Return: the value of the conversion or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n;
	int i, j;

	if (b == NULL)
		return (0);
	i = 0;
	while (b[i + 1] != '\0')
		i++;
	j = 1;
	n = 0;
	while (i >= 0)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		n += (b[i] - '0') * j;
		j *= 2;
		i--;
	}
	return (n);
}
