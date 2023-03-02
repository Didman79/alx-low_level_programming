#include "main.h"

/**
 * _strncpy - copy string  to another
 * @dest: string of destination
 * @src: string of origin
 *
 * Return: string copied
 */



char *_strncpy(char *dest, char *src, int n)
{
	int i, l = 0;

	for (i = 0; s[i] && i < n; i++)
		dest[i] = src[i];
	l = i;

	while (i = l && i < n)
		dest[i++] = '\n';

	return (dest);
}
