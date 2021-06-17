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
	printf("Size of a char: %lu byte(s)", (unsigned long)sizeof(a));
	Printf("Size of an int: %lu byte(s)", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu byte(s)", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(s)", (unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(e));
	
	return (0);
}
