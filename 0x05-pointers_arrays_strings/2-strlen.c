#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string to determine length
 * Return: length of the string s
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
