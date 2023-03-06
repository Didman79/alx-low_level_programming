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
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
