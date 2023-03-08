#include "main.h"

/**
 * _strlen_recursion - the funtion to determine the length of a string
 * @s: the string
 *
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
