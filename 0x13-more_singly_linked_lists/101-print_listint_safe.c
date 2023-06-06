#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head of the listp_t list
 *
 * Return: No return value
 */
void free_listp(listp_t **head)
{
	if (head != NULL)
	{
		listp_t *temp;
		listp_t *curr = *head;

		while (curr != NULL)
		{
			temp = curr;
			curr = curr->next;
			free(temp);
		}

		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list safely
 * @head: head of the listint_t list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *hptr = NULL, *new, *add;

	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));
		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;
		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (nnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}

	free_listp(&hptr);
	return (nnodes);
}

