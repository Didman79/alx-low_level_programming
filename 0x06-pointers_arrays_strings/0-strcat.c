#include "main.h"

/**
 * _strcat - concatenates a string src to a string dest
 * @dest: string to concatenate to
 * @src: string to concatenate from
 *
 * Return: dest after concatanation
 */


char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
