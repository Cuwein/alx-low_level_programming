#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ai;
	int len, i;

	ai = 0;
	len = strlen(b);

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1' && b[i] != '0')
		{
			ai += (1 << (len - 1 - i));
		}
	}

	return (ai);
}
