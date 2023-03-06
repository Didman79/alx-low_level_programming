#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: Pointer to which we display its values
 * @to: variable containing values
 *
 * Return: the value of the pointer
 *
 */

void set_string(char **s, char *to)
{
	*s = to;
}
