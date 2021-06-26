#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98 than new line.
 *
 * @n: is the first number
 * Return: nothing
 */
int print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n--;
		}
	}
	else
		printf("98");
	printf("\n");
}
