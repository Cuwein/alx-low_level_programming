#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: bytes allocate
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{

	void *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
