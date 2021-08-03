#include "lists.h"
/**
 * add_nodeint_end - adds a new element in the last of the list
 * @head: the first element of the current list
 * @n: the value to assign to the new element
 * Return: a pointer to the first element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *h;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		h = *head;
		while (h->next != NULL)
			h = h->next;
		h->next = new_node;
	}
	return (*head);
}
