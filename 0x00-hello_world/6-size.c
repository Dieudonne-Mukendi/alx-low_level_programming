#include <stdio.h>
#include <string.h>
/**
 * main - The entry point of my program
 *
 * Return: Return O if there is no error in main program
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	printf("Size of a char: %d byte(s)", (int)sizeof(a));
	Printf("Size of an int: %d byte(s)", (int)sizeof(b));
	printf("Size of a long int: %d byte(s)", (int)sizeof(c));
	printf("Size of a long long int: %d byte(s)", (int)sizeof(d));
	printf("Size of a float: %d byte(s)", (int)sizeof(e));
	return (0);
}
