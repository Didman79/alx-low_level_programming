#include "main.h"

/**
 * _puts_rev - prints the string in reverse
 * @s: the string to be printed
 *
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');

}
