#include "main.h"

/**
 * _puts_rev - prints the string in reverse
 * @s: the string to be printed
 *
 */

void print_rev(char *s)
{
	int i = 0;
	int n = 0;

	while (s[i] != '\0')
	{
		i++;
		n = i - 1;
	}
	for (n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');

}

