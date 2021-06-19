#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - The entry point of my program
 *
 * Description: The program generate a random number
 *		and tell you about the last digit of that number
 *
 * Return: Return O if there is no error in main program
 */
int main(void)
{
	int n;
	int l_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_digit = n % 10;
	if (l_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l_digit);
	else if (l_digit < 0 && l_digit < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_digit);
	else
		printf("Last digit of %d is %d and is 0\n", n, l_digit);

	return (0);
}
