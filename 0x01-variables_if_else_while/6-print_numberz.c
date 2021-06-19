#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - The entry point of my program
 *
 * Description: The program prints all single digit numbers
 * of base 10 starting from 0, followed by a new line.
 *
 * Return: Return O if there is no error in main program
 */
int main(void)
{
	int n = 0;

	for (n = '0'; n <= '9'; n++)
	{
		putchar((char) n);
	}
	putchar('\n');

	return (0);
}
