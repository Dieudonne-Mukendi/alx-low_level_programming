#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - The entry point of my program
 *
 * Description: The program prints all the numbers of base 16
 * in lowercase, followed by a new line.
 *
 * Return: Return O if there is no error in main program
 */
int main(void)
{
	int n = 0;
	char base16[28] = "0123456789abcdef";

	while (base16[n] != '\0')
	{
		putchar(base16[n++]);
	}
	putchar('\n');

	return (0);
}
