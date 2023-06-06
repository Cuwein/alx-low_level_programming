#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 * Return: return NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *x, *y;

	if (head == NULL || head->next == NULL)
		return (NULL);

	x = head->next;
	y = (head->next)->next;

	while (y)
	{
		if (x == y)
		{
			x = y;

			while (x != y)
			{
				x = y->next;
				y = y->next;
			}

			return (x);
		}

		x = x->next;
		y = (y->next)->next;
	}

	return (NULL);
}
