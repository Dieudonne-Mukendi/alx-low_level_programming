#include <stdio.h>

/**
 *main - Prints combinations of decimal digits using only putchar
 *
 *Description: Prints combinations of decimal digits using only putchar
 *Return: 0
 */
int main(void)
{
	int d_one = 0;
	int d_two = 0;
	int d_three = 0;
	int d_four = 0;

	for (d_one = 48; d_one <= 57; d_one++)
	{
		for (d_two = 48; d_two <= 57; d_two++)
		{
			for (d_three = d_one; d_three <= 57; d_three++)
			{
				for (d_four = d_two + 1; d_four <= 57; d_four++)
				{
					putchar(d_one);
					putchar(d_two);
					putchar(' ');
					putchar(d_three);
					putchar(d_four);
					if (!((d_one == 57 && d_two == 56) && (d_three == 57 && d_four == 57)))
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
