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
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
