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
	int n = 0;

	while (s[i] != '\0')
	{
		i++;
		n = i;
	}
	for (j <= 0; j <= n - 1; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');

}

