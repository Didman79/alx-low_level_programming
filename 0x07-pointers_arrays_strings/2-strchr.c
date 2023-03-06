#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string area where to check
 * @c: character to locate in s
 *
 * Return: if c found, return the pointer
 * if c not found; return NULL
 *
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	
	while (s[i] != '\0'; i++)
	{
		if ( s[i] == c)
			return (s + i);
	}
	return ('\0');
}
