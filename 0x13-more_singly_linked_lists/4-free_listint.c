#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the address of the first element
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *h;

	if (head == NULL)
		return;
	h = head;
	do {
		head = head->next;
		free(h);
		h = head;
	} while (h != NULL);
}
