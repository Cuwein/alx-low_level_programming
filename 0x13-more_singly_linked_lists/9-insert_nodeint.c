#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * added.
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;

	}

	else
	{

	listint_t *current = *head;
	unsigned int i = 0;

	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}
	if (current != NULL)
	{
		new->next = current->next;
		current->next = new;

	}
	else
	{
		free(new);

		return (NULL);
	}
	}

		return (new);
}
