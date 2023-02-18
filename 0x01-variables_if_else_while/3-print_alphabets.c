#include<stdio.h>

/**
 * main - sort alphabet
 *
 * Return: 0 (succes)
 */

int main(void)
{
	char c = 'a';
	char x = 'A';

	for (; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
