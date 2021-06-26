#include <stdio.h>
/**
 * main - the entry point of the program
 *
 * return: 0 if the program run with success
 */
int main (void)
{
	int a, i, b, c;

	a = 23;
	for (i = 10; i < 1024; i++)
	{
		b = i % 3;
		c = i % 5;
		if (b == 0 || c == 0)
			a = a + i;
	}
	printf("%d", a);
	return (0);
}
