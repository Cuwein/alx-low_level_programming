#include "main.h"

/**
 * flip_bits - returns the number of bits that would be
 * needed to flip to get from one number to another
 * @n: number one.
 * @m: number two.
 *
 * Return: return (count).
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned int count;

	xor = n ^ m;
	count = 0;

	while (xor != 0)
	{
		count += xor & 1;
		xor >>= 1;
	}

	return (count);

}
