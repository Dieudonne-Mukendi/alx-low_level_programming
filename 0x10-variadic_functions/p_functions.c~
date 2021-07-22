#include <string.h>
#include "variadic_functions.h"
/**
 * p_char - print a character
 * @arg: argument to print
 * Return: Nothing
 */
void p_char(va_list arg)
{
	printf("%c", (char)va_arg(arg, int));
}
/**
 * p_int - print an integer
 * @arg: argument to print
 * Return: Nothing
 */
void p_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}
/**
 * p_float - print float
 * @arg: argument to print
 * Return: Nothing
 */
void p_float(va_list arg)
{
	printf("%f", (double)va_arg(arg, double));
}
/**
 * p_strings - print strings
 * @arg: argument to print
 * Return: Nothing
 */
void p_strings(va_list arg)
{
	char *s = (char *)va_arg(arg, char *);

	printf("%s", (s) ? s : "(nil)");
}
/**
 * get_printer - select the function associated to the given parameter
 * @f: type of data to print
 * Return: a pointer to the associated function or NULL
 */
void (*get_printer(char f))(va_list)
{
	f_print fp_get[] = {
		{'c', p_char},
		{'i', p_int},
		{'f', p_float},
		{'s', p_strings},
		{'\0', NULL},
	};
	int i = 0;

	while (i < 5 && f != '\0')
	{
		if (fp_get[i].c == f)
			return (fp_get[i].pf);
		i++;
	}
	return (NULL);
}
/**
 *  print_all - prints anything
 * @format: list of types per arguments passed
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0, len;
	void (*fun)(va_list);
	va_list p_arg;

	if (format == NULL)
		return;
	len = strlen(format);
	va_start(p_arg, format);
	while (i < len)
	{
		fun = get_printer(format[i]);
		if (fun != NULL)
			fun(p_arg);
		if (i < len - 1 && fun != NULL)
			printf(", ");
		i++;

	}
	printf("\n");
	va_end(p_arg);
}
