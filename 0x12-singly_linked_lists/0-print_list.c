#include "lists.h"
/**
 * print_list - print the elements of list_t list.
 * @h: singly linked list.
 * Return: nelem
 */

size_t print_list(const list_t *h)
{
	size_t nelem = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
	h = h->next;
	nelem++;
	}
	return (nelem);
}
