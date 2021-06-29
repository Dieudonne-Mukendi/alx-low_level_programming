
#include <stdio.h>
/**
* main - entry point
*Return: 0 if runed with success
*/
int main(void)
{
	int a, b, c, i;

	c = 0;
	a = 0;
	b = 1;
	for (i = 0; i < 50; i++)
	{
		a = b;
		b = c;
		c = a + b;	
		printf("%d", c);
		if (i != 49)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
