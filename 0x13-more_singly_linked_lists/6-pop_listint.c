#include "lists.h"
/**
 * pop_listint - delete the head element of a list
 * @head: a pointer to the first element
 *
 * Return: the deleted element's data or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *to_pop;
	int pop_data;

	if (head == NULL || *head == NULL)
		return (0);
	to_pop = *head;
	pop_data = to_pop->n;
	*head = to_pop->next;
	free(to_pop);
	return (pop_data);
}
