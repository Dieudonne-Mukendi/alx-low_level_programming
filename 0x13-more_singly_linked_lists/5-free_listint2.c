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
	do {
		h = p;
		p = p->next;
		free(h);
	} while (p != NULL);
	*head = NULL;
}
