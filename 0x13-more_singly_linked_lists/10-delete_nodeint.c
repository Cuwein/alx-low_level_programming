#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = NULL;
	unsigned int x = 0;
	listint_t *tmp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (x < index - 1)
	{
		if (tmp != NULL || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		x++;
	}

	tmp->next = current->next;
	current = tmp->next;
	free(current);

	return (1);
}
