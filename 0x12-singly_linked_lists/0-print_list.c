#include "lists.h"
/**
 * _slen - returns the length of a string
 * @str: the string given
 *
 * Return: the length or 0
 */
int _slen(char *str)
{
	int len = 0;

	if (str == NULL)
		return (0);
	while (*(str + len) != '\0')
		len++;
	return (len);
}

/**
 * print_list - prints all elements of a list_t list.
 * @h: first element of list_t
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *cnode;
	size_t i = 0;
	int len;

	if (h == NULL)
		return (0);
	cnode = h;
	while (cnode != NULL)
	{
		len = (cnode->str) ? _slen(cnode->str) : 0;
		printf("[%d] %s\n", len, (cnode->str) ? cnode->str : "(nil)");
		cnode = cnode->next;
		i++;
	}

	return (i);
}
