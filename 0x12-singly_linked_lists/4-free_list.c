#include "lists.h"
/**
 *  free_list - deallocate memory to all node of a list
 *  @head: first element of the list
 *  Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *next;

	if (head == NULL)
		return;
	next = head->next;
	do {
		free(head->str);
		free(head);
		head = next;
		next = (head) ? head->next : NULL;
	} while (head != NULL);
}
