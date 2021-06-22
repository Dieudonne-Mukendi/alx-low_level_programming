#inlude "holberton.h"
/**
 * main - The entry point of my program
 *
 * Description: The program prints the alphabet in lowercase.
 *followed by a new line.
 *
 * Return: Return O if there is no error in main program
 */
int main(void)
{
	print_alphabet();
	_putchar('\n');

	return (0);
}
/**
 * print_alphabet - A function who print the alphabet in lowercase
 *
 * Description - Does not receive any parameters
 *
 * Return: Does not return anything
 */
void print_alphabet(void)
{
	for (int i = 97; i < 123; i++)
	{
		_putchar(i);
	}
}
