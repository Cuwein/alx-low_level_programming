#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
	int count = 0, ch;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}

	if (count % 2 == 1)
		ch = count / 2;
	else
		ch = (count - 1) / 2;

	for (ch++; ch < count; ch++)
		_putchar(str[ch]);
	_putchar('\n');
}

