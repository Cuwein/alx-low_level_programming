#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{

	/* Declare variables */
	listint_t *slow;
	listint_t *fast;

	/* Initialize slow and fast pointers */
	slow = head;
	fast = head;

	/* Iterate over the linked list, moving slow and fast at different speeds */
	while (slow && fast && fast->next)
	{

	/* Move slow one node at a time */
		slow = slow->next;

	/* Move fast two nodes at a time */
	fast = fast->next->next;

	/* Check if slow and fast have met */
	if (slow == fast)
	{

	/* Find the node that starts the loop */
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}

	/* Return the node that starts the loop */
	return (slow);
	}
	}

	/* Return NULL if no loop was found */
	return (NULL);
}

