#include "holberton.h"
/**
 * _pow_recursion - returns the value of @x raised to the power of @y
 * @x: value to raise
 * @y: power
 *
 * Return: an integer
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else if (y == 0)
		return (1);
	else
		return (-1);
}
