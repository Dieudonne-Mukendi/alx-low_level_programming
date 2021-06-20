#include <stdio.h>

/**
 *main - Prints combinations of decimal digits using only putchar
 *
 *Description: Prints combinations of decimal digits using only putchar
 *Return: 0
 */
int main(void)
{
	int digit_one = 0;
	int digit_two = 0;

	for (digit_one = 48; digit_one <= 57; digit_one++)
	{
		for (digit_two = digit_one + 1; digit_two <= 57; digit_two++)
		{
			putchar(digit_one);
			putchar(digit_two);
			if (!(digit_one == 56 && digit_two == 57))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
