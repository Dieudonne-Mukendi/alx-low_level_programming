#include "lists.h"
/**
 * sum_listint - returns the sum of a listint_t linked list.
 * @head: the first element
 *
 * Return: the sum of all elements or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *cnode;

	if (head == NULL)
		return (sum);
	cnode = head;
	while (cnode != NULL)
	{
		sum += cnode->n;
		cnode = (cnode->next) ? cnode->next : NULL;
	}
	return (sum);
}
