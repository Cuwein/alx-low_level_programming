#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head of a list.
 *
 * Return: returns nothing.
 */
void free_listp2(listp_t **head)
{
	listp_t *t;
	listp_t *c;

	if (head != NULL)
	{
		c = *head;
		while ((t = c) != NULL)
		{
			c = c->next;
			free(t);
		}

		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: return new_nodes.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t new_nodes = 0;
	listp_t *hptr, *n, *sum;
	listint_t *c;

	hptr = NULL;
	while (*h != NULL)
	{
		n = malloc(sizeof(listp_t));

		if (n == NULL)
			exit(98);

		n->p = (void *)*h;
		n->next = hptr;
		hptr = n;

		sum = hptr;

		while (sum->next != NULL)
		{
			sum = sum->next;
			if (*h == sum->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (new_nodes);
			}
		}

		c = *h;
		*h = (*h)->next;
		free(c);
		new_nodes++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (new_nodes);
}
