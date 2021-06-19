#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - The entry point of my program
 *
 * Description: The program prints the alphabet in lowercase
 * and then in uppercase followed by a new line.
 *
 * Return: Return O if there is no error in main program
 */
int main(void)
{
	int n = 0;
	int m = 0;
	char alphabet_in_lowercase[28] = "abcdefghijklmnopqrstuvwxyz";
	char alphabet_in_uppercase[28] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (alphabet_in_lowercase[n] != '\0')
	{
		putchar(alphabet_in_lowercase[n]);
		n++;
	}
	while (alphabet_in_uppercase[m] != '\0')
	{
		putchar(alphabet_in_uppercase[m]);
		m++;
	}
	putchar('\n');

	return (0);
}
