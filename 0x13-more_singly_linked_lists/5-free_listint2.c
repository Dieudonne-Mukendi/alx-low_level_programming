#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to the address of the first element
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *h, *p;

	if (head == NULL)
		return;
	p = *head;
	h = p->next;
	do {
		free(*head);
		if (h != NULL)
			*head = h;
		h = h->next;
	} while (h->next != NULL);
	free(p);
	free(h);
	free(*head);
}
