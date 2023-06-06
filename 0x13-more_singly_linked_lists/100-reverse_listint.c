#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);

	while (current != NULL)
	{
	next = current->next;
	current->next = p;
	p = current;
	current = next;
	}

	*head = p;

	return (*head);
}
