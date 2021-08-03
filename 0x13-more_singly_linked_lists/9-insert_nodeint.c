#include "lists.h"
/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: the first element
 * @n: new node data
 * @idx: the index position for the insertion
 * Return: the address of the inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *idx_node;
	unsigned int i = 0;

	if (head == NULL || (*head == NULL && idx != 0))
		return (NULL);
	idx_node = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL && idx == 0)
	{
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	if (*head != NULL && idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (; i < idx - 1 && idx_node != NULL; i++)
		idx_node = (idx_node->next) ? idx_node->next : NULL;
	if (((idx - 1 >= i + 1) || (idx - 1 == i)) && idx_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = (idx_node->next) ? idx_node->next : NULL;
	idx_node->next = new_node;
	return (new_node);
}
