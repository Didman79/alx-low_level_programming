#include "main.h"

/**
 * *leet- replace designed letters by designed numbers
 * @str: string to be checked if it holds the designed letter
 *
 * Return: the resulting string after replacement of the letters
 *
 */

char *leet(char *str)
{
	int i, j = 0;
	char n[] = "aAeEoOtTlL";
	char m[] = "4433007711";

	while (str[i] != '\0')
	{
		while (n[j] != '\0')
		{
			if (str[i] == n[j])
				str[i] = m[j];
		}
		j++;
	}
	i++;
	return (str);
}
