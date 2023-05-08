#include "main.h"

/**
 * _memcpy - irontnoux2
 * @dest: pointer to char params
 * @src: pointer to char params
 * @n: size
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int cp;

	for (cp = 0; cp < n; cp++)
	{
		dest[cp] = src[cp];
	}
	return (dest);
}
