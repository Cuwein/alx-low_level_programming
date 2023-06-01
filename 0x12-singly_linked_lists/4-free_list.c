#include "lists.h"

/**
 * free_list - free list
 * @head: linked list head
 * Return: nothing
 */

void free_list(list_t *head)
{

	while (head != NULL)
	{

		list_t *next = head->next;

		free(head->str);

		free(head);
		head = next;

	}

}
