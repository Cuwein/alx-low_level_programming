#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: head of a list.
 */

void free_listint(listint_t *head)
{

	listint_t *temp;

		while (head)
		{
			temp = head->next;
			free(head);
			head = temp;

		}
}
