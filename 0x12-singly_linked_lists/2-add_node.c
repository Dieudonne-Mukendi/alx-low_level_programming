#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: a pointer to the head node
 * @str: string to assign to the new node
 * Return: a pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == NULL || str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = malloc(sizeof(*str) * strlen(str));
	if (new_node->str == NULL)
	{
		free(new_node->str);
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
