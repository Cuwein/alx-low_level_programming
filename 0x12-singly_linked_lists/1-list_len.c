#include "lists.h"
/**
 * list_len - number of elements returned in a list
 * @h: singly listed list
 * Return: nelem
 */

size_t list_len(const list_t *h)
{
size_t nelem = 0;

	while (h != NULL)
	{
	nelem++;
	h = h->next;
	}
	return (nelem);
}
