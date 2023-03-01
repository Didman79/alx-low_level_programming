#include "main.h"

/**
 * puts2 - prints one character out of two of the string
 * @str: the string to be printed from
 *
 */

void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	while (j < i; j += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
