#include "main.h"

/**
 * int _strspn - gets the length of a prefix substring
 * @*s: string where to count bytes of a segment
 * @*accept: string where characters to identify are  from
 *
 * Return: the matched segment of string s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, flag;
	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				flag = 1;
			}
		}
		if (flag == 0)
			return (k);
	}
	return (NULL);
}
