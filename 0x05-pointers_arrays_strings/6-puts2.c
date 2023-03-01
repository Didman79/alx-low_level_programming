#include "main.h"

/**
 * puts2 - prints one character out of two of the string
 * @str: the string to be printed from
 *
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');

}
