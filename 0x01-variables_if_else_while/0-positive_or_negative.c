#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - The entry point of my program
 *
 * Return: Return O if there is no error in main program
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("0 is zero\n");

	return (0);
}
