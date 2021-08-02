#include "lists.h"
#include <string.h>
/**
 * add_node_end - add a node in the end of the list
 * @head: a pointer to the first node
 * @str: string to set to the node
 * Return: a pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current = head;

	/* we move first to the end */
	while (current->next != NULL)
		current = current->next;

	/* now we can add a new node */
	current->next = (list_t *) malloc(sizeof(list_t));
	if (current->next == NULL)
		return (NULL);
	current->next->str = malloc(sizeof(*str) * strlen(str));
	if (current->next->str == NULL)
	{
		free(current->next);
		return (NULL);
	}
	current->next->str = strdup(str);
	current->next->next = NULL;

	return (current->next);
}
