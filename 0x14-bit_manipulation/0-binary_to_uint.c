#include "main.h"

/**
 * binary_to_uint - conversion of binary number to an
 * unsigned int.
 * @b: binary.
 * Return: Return (ai).
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ai;
	int i, len;

	if (!b)
		return (0);

	ai = 0;
	i = 0;
	len = 1;

	for (i = 0; b[i] != '\0'; i++)
		;

	for (i--, len = 1; i >= 0; i--, len *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		if (b[i] & 1)
		{
			ai += len;
		}
	}

	return (ai);
}
