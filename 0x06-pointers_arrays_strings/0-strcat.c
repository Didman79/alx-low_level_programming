#include "main.h"

/**
 * _strcat- concatenate value of *src to the value of *dest
 * @*dest : where concatenate will be to
 * @*src : where concatenate will be from
 * Return: dest
 */



Void char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	for (i != '\0')
	{
		i++;
		while (j != '\0')
		{
			dest[i + j] = src[j];
			j++;
		}
	}
	dest[i] = "\0";
	return (dest);
}
