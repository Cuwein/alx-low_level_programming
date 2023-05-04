#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0, b = 0, c, x, y, z, add = 0;

	while (*(n1 + a) != '\0')
		a++;
	while (*(n2 + b) != '\0')
		b++;
	if (a >= b)
		x = a;
	else
		x = b;
	if (size_r <= x + 1)
		return (0);
	r[x + 1] = '\0';
	a--, b--, size_r--;
	y = *(n1 + a) - 48, z = *(n2 + b) - 48;
	while (x >= 0)
	{
		c = y + z + add;
		if (c >= 10)
			add = c / 10;
		else
			add = 0;
		if (c > 0)
		*(r + x) = (c % 10) + 48;
		else
			*(r + x) = '0';
		if (a > 0)
			a--, y = *(n1 + a) - 48;
		else
			y = 0;
		if (b > 0)
			b--, z = *(n2 + b) - 48;
		else
			z = 0;
		x--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
