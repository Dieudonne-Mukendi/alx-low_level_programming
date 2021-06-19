#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - The entry point of my program
 *
 * Description: The program prints the alphabet in lowercase
 * execpt 'q' and 'e' followed by a new line.
 *
 * Return: Return O if there is no error in main program
 */
int main(void)
{
	int n = 0;
	char alphabet[28] = "abcdefghijklmnopqrstuvwxyz";

	while (alphabet[n] != '\0')
	{
		if (alphabet[n] != 'e' && alphabet[n] != 'q')
		putchar(alphabet[n]);
		n++;
	}
	putchar('\n');

	return (0);
}
