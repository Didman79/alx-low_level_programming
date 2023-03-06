#include "main.h"
/**
 * *_memset - fills s memory's with a constant byte b
 * @s: memory area to be filled
 * @b: constant  to copy
 * @n: number of times b gonna be written
 *
 * Return: pointer s after writting
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	while (i = 0; i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
