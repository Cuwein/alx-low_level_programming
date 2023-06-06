#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 * Return: return NULL or the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p;
	listint_t *rev;

	p = head;
	rev = head;
	while (head && p && p->next)
	{
		head = head->next;
		p = p->next->next;

		if (head == p)
		{
			head = rev;
			rev = p;
			while (1)
			{
				p = rev;
				while (p->next != head && p->next != rev)
				{
					p = p->next;
				}
				if (p->next == head)
					break;

				head = head->next;
			}
			return (p->next);
		}
	}

	return (NULL);
}
