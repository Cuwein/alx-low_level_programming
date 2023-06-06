#include "lists.h"

/**
 * free_listp2 - Frees a linked list.
 * @head: Head of the list.
 *
 * Return: No return.
 */
void free_listp2(listp_t **head)
{
	while (*head != NULL)
	{
		listp_t *temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}

/**
 * find_node - Finds a node in the list.
 * @h: Pointer to the head of the list.
 * @add: Pointer to the list pointer being checked.
 *
 * Return: True if the node is found, false otherwise.
 */
bool find_node(listint_t **h, listp_t *add)
{
	while (add != NULL)
	{
		if (*h == (listint_t *)add->p)
			return (true);
		add = add->next;
	}
	return (false);
}

/**
 * remove_node - Removes a node from the list.
 * @h: Pointer to the head of the list.
 * @hptr: Pointer to the temporary list pointer.
 * @found: Pointer to the boolean flag indicating if the node was found.
 *
 * Return: No return.
 */
void remove_node(listint_t **h, listp_t **hptr, bool *found)
{
	*h = NULL;
	*found = true;
	free_listp2(hptr);
}

/**
 * free_listint_safe - Frees a linked list safely.
 * @h: Head of the list.
 *
 * Return: Size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *hptr = NULL;
	bool found;
	listint_t *curr = *h;

	while (*h != NULL)
	{
		listp_t *new_node = malloc(sizeof(listp_t));

		if (new_node == NULL)
		{
			free_listp2(&hptr);
			exit(98);
		}

		new_node->p = (void *)*h;
		new_node->next = hptr;
		hptr = new_node;

		found = find_node(h, hptr);

		if (found)
		{
			remove_node(h, &hptr, &found);
			return (nnodes);
		}

		*h = (*h)->next;
		free(curr);
		nnodes++;
	}

	free_listp2(&hptr);
	return (nnodes);
}
