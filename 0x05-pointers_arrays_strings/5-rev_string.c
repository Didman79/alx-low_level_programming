#include "main.h"

/**
 * rev_string - prints a string in reverse , followed by a new line
 * @s: the string to be printed
 *
 */

void rev_string(char *s)
{
	int i = 0;
	int j,l;
	char tmp;

	while (s[i] != '\0')
	{
		i++;
	}
	l = i - 1;

	for (j = 0;j < l/2; j++)
	{
		tmp = s[j];
		s[j] = s[l];
		s[l] = tmp;
		l--;

	}
	

}

