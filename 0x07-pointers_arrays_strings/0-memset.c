#include "main.h"

/**
 * *_memset - fills the first n bytes of the memory area pointed to by s with the constant byte b
 * @s: the string  where to rwite
 * @b: the constant byte to write in s
 * @n: n times b gonna be written in s
 *
 * Returns: the  pointer S after writing in its memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *s[];
	char b;
	unsigned int i;

	while (i = 0; i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
