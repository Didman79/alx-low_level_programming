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
                putchar(c);
        }
        putchar('\n');
	return;
}

int main(void)
{
	print_alphabet(void)

	return (0);
}
