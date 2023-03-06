#include "main.h"

/**
 * *_strpbrk - matches character in string s from string accept
 * @s: where to match characters
 * @accept: contains charaters to match in s
 *
 * Return: the first character matched
 * NULL if no matching occured
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}
	return ('\0');
}
