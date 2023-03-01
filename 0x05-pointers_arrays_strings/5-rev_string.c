#include "main.h"

/**
 * rev_string - prints a string in reverse , followed by a new line
 * @s: the string to be printed
 *
 */

void rev_string(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		i = j - i;
		s[j] = s[i];
	}
	

}

