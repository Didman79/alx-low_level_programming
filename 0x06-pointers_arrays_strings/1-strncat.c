#include "main.h"

/**
 * _strncat - concatenates a string src to a string dest
 * @dest: string to concatenate to
 * @src: string to concatenate from
 * @n: number of bytes to be appended form src to dest
 * Return: dest after concatanation
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = o;
	int l = 0;
	while (dest[i++])
		l++;

	for (i = 0; src[i++] && i < n; i++)
	{
		dest[l++] = src[i];
	}

	return (dest);
}
