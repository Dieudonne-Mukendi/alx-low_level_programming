#include <string.h>
#include "variadic_functions.h"
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
