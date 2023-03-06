#include "main.h"

/**
 * * _memcpy copies from memory src to memory dest
 * @dest: where bytes are copied to
 * @src: where bytes are copied from
 * @n: number of bytes to be copied
 *
 * Return: a pointer dest as result
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
