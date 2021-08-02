#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the address of the first element
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *h, *p;

	if (head == NULL)
		return;
	p = head;
	h = p->next;
	do {
		free(p);
		p = h;
		h = h->next;
	} while (h != NULL);
	free(p);
	free(h);
	free(head);
}
