#include "main.h"

/**
 * * _memcpy copies from memory src to memory dest
 * @src: where bytes are copied from
 * @dest: where bytes are copied to 
 * @n: number of bytes to be copied
 *
 * Returns: a pointer dest as result
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
