#include "main.h"

/**
 * _puts_rev - prints the string in reverse
 * @s: the string to be printed
 *
 */

void print_rev(char *s)
{
	int i = 0;
	int j = 0;
	int length;

	while (s[i] != '\0')
	{
		i++;
	}

	length = i - 1;

	for (j < length; j >= 0; n--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');

}

