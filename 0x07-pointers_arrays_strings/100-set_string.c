nes (11 sloc)  198 Bytes
#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: source adress.
 * @to: target adress.
 * Return: no return.
 */
void set_string(char **s, char *to)
{
	*s = to;
}

