#include "main.h"
/**
 * _strlen- to evaluate the length of a string
 * @s: string to determine length
 * return: length of the string s
 *
 */


int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	return (n);
}
