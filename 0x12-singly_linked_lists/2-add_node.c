#include "lists.h"
/**
 * add_node - add new node at the beginning
 * of a list_t list.
 * @head: head linked list.
 * @str: string store in the list.
 * Return: *head.
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}
