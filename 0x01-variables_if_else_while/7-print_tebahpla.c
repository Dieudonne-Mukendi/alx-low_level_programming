#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - The entry point of my program
 *
 * Description: The program prints the lowercase alphabet
 * in reverse, followed by a new line.
 *
 * Return: Return O if there is no error in main program
 */
int main(void)
{
	int n = 26;
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	while (n > 0)
	{
		putchar(alphabet[--n]);
	}
	putchar('\n');

	return (0);
}
