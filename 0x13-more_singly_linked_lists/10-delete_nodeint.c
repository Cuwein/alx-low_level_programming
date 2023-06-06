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
	listint_t *current = *head;
	unsigned int i;
	listint_t *temp;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (-1);
	}

	for (i = 0; i < index - 1 && current->next != NULL; i++)
	{
		current = current->next;
	}

	if (current->next == NULL || current == NULL)
		return (-1);

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
