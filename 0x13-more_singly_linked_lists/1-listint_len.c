#include "lists.h"
/**
 * listint_len  -  Return The number of elements
 * of a listint_t list.
 * @h: head of the list
 *
 * Return: The number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (num);
	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
