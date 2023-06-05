#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *node;

	for (node = h; node != NULL; node = node->next)
	{

	printf("%d\n", node->n);
	count++;
	}
	printf("\n");

	return (count);
}
