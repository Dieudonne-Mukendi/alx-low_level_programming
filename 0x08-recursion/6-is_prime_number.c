#include "holberton.h"
/**
 * prime_checker - check if @x is prime or composite
 * @x: number to check
 * @y: half of @x to help the checking process
 * Return: 1 if @x is prime otherwise 0
 */
int prime_checker(int x, int y)
{
	if (y == 1)
		return (1);
	else if (y != 1 && x % y == 0)
		return (0);
	else
		return (prime_checker(x, y - 1));
}

/**
 * is_prime_number - returns 1 if the input is a prime number, otherwise 0
 * @n: input number
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n > 1)
		return (prime_checker(n, n / 2));
	return (0);
}
