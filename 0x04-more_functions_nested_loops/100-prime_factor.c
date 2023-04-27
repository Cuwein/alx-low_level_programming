#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	unsigned long int x = 3, y = 612852475143;

	for (; x < 12057; x += 2)
	{
		while (y % x == 0 && y != x)
			y /= x;
	}
	printf("%lu\n", y);
	return (0);
}

