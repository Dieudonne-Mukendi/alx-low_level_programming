#include "lists.h"
/**
 * delete_nodeint_at_index -  deletes node at a given position.
 * @head: the first element
 * @idx: index of element to delete
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *to_delete, *idx_node;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	idx_node = *head;
	if (*head == NULL && idx == 0)
	{
		to_delete = *head;
		free(to_delete);
		return (1);
	}
	if (*head != NULL && idx == 0)
	{
		to_delete = *head;
		*head = to_delete->next;
		free(to_delete);
		return (1);
	}
	for (; i < idx - 1 && idx_node != NULL; i++)
		idx_node = (idx_node->next) ? idx_node->next : NULL;
	if (idx_node == NULL || idx_node->next == NULL)
		return (-1);
	to_delete = idx_node->next;
	idx_node->next = (to_delete->next) ? to_delete->next : NULL;
	free(to_delete);
	return (1);
}
