#include "lists.h"
/**
 *  add_nodeint - adds a new element in the beginning of the list
 * @head: the first element of the current list
 * @n: the value to assign to the new element
 * Return: a pointer to the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
