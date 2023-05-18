#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */
int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (0);

	a = malloc((max - min + 1) * sizeof(int));

	if (a == 0)
		return (0);

	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
