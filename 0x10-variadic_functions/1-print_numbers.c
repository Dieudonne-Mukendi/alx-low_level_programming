#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to print between numbers
 * @n: number of integers passed to the function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arg_ptr;

	if (separator == NULL || n == 0)
		return;
	va_start(arg_ptr, n);
	while (i < n)
	{
		printf("%d", (int)va_arg(arg_ptr, int));
		if (i != n - 1)
			printf("%s", separator);
		i++;
	}
	va_end(arg_ptr);
	printf("\n");
}
