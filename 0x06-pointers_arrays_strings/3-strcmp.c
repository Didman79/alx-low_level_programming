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
	int i = 0;

	while (src[i] != '\0' && i < n)
		dest[i++] = src[i];

	while (i < n)
		dest[i++] = '\0';

	return (dest);
}
