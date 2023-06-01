#include "lists.h"

/**
 * add_node_end - adding a new node at the end
 * of a list.
 * @head: linked list head.
 * @str: string to store the list.
 * Return: *head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		list_t *last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
		last->next = new;
	}

		return (*head);
}
