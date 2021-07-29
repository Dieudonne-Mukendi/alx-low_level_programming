#include "lists.h"
/**
 * list_len - return the number of nodes
 * @h: first node
 *
 * Return: The number of nodes in a list
 */
size_t list_len(const list_t *h)
{
	const list_t *cnode;
	size_t i = 0;

	if (h == NULL)
		return (0);
	cnode = h;
	while (cnode != NULL)
	{
		cnode = cnode->next;
		i++;
	}

	return (i);
}
