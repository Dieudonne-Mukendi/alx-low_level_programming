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
	int digit_three = 0;
	int digit_four = 0;

	for (digit_one = 48; digit_one <= 57; digit_one++)
	{
		for (digit_two = 48; digit_two <= 57; digit_two++)
		{
			for (digit_three = digit_one; digit_three <= 57; digit_three++)
			{
				for (digit_four = digit_two + 1; digit_four <= 57; digit_four++)
				{
					putchar(digit_one);
					putchar(digit_two);
					putchar(' ');
					putchar(digit_three);
					putchar(digit_four);
					if (!((digit_one == 55 && digit_two == 56) && digit_three == 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
