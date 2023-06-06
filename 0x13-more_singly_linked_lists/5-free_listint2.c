#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */

void free_listint2(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *temp;

	if (head == NULL)
		return;

	while (curr != NULL)
	{
		temp = curr;

		curr = curr->next;

		free(temp);

	}

	*head = NULL;
}
