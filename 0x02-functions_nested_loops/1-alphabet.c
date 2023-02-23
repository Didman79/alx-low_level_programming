#include <stdio.h>



/**
 *
 * main - input code to print alphabet
 *
 * Return :0 (success)
 *
 */

void print_alphabet(void)
{
	int c = 'a';
	for (; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
