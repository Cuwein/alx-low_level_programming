#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int x;
	unsigned char  *ptr;

	x = 1;
	ptr = (unsigned char *) &x;

	return (*ptr == 1);

}
