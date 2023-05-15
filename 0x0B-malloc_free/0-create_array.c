#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *ab;
	unsigned int x;

	if (size == 0)
		return (NULL);

	ab = malloc(sizeof(c) * size);

	if (ab == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		ab[x] = c;

	return (ab);
}
