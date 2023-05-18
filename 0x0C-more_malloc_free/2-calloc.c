#include "main.h"

/**
  * _calloc - ...
  * @nmemb: number of members
  * @size: size
  *
  * Return: ...
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int x = 0, y = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	y = nmemb * size;
	ptr = malloc(y);

	if (ptr == NULL)
		return (NULL);

	while (x < y)
	{
		ptr[x] = 0;
		x++;
	}

	return (ptr);
}
