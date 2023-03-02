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
	int i;

	for (i = 0; s[i] && i < n; i++)
		dest[i] = src[i];
	while (i < n)
		dest[i] = '\n';

	return (dest);
}
