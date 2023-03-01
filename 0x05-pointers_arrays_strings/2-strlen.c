#include "main.h"
/**
 * _strlen- to evaluate the length of a string
 * @s: string to determine length
 * return: length
 *
 */


int _strlen(char *s)
{
	int i = 0;
	int n = 0;

	for (s[i] != '\0'; i++)
	{
		n++;
	}

	return (n);
}
