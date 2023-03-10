#include "main.h"

/**
 * _strncpy - copy string  to another
 * @dest: string of destination
 * @src: string of origin
 * @n: size of string src to be copied
 * Return: string copied
 */



char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
